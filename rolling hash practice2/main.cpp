#include <iostream>

using namespace std;


const unsigned PRIME_BASE = 257;
const unsigned PRIME_MOD = 1000000007;

unsigned myhash(const string& s)
{
    long long ret = 0;
    for (int i = 0; i < s.size(); i++)
    {
    	ret = ret*PRIME_BASE + s[i];
    	ret %= PRIME_MOD; //don't overflow
    }
    return ret;
}

int rabin_karp(const string& needle, const string& haystack)
{
//I'm using long longs to avoid overflow
    long long hash1 = myhash(needle);
    long long hash2 = 0;

    //you could use exponentiation by squaring for extra speed
    long long power = 1;
    for (int i = 0; i < needle.size(); i++)
    	power = (power * PRIME_BASE) % PRIME_MOD;

    for (int i = 0; i < haystack.size(); i++)
    {
    	//add the last letter
    	hash2 = hash2*PRIME_BASE + haystack[i];
    	hash2 %= PRIME_MOD;

    	//remove the first character, if needed
    	if (i >= needle.size())
    	{
    		hash2 -= power * haystack[i-needle.size()] % PRIME_MOD;
    		if (hash2 < 0) //negative can be made positive with mod
    			hash2 += PRIME_MOD;
    	}

    	//match?
    	if (i >= needle.size()-1 && hash1 == hash2)
    		return i - (needle.size()-1);
    }

    return -1;
}

int main()
{
    cout << rabin_karp("waldo", "willy werther warhol wendy --> waldo <--") << endl;
}
