#include <bits/stdc++.h>

using namespace std;

int base_prime = 253;
int base_mod = 100007;

int hash_to_compare(string s2)
{
    int result=0;

    for(int i = 0;i<(int)s2.size();i++)
    {
        result += result*base_prime+s2[i];
        result%=base_mod;
    }
    return result;

}

int main()
{
    while(1){
    string s1,s2;

    getline(cin,s1);
    getline(cin,s2);

    int hash_cmpr = hash_to_compare(s2);

    int hash1 = 0;



    long long int power = 1;

    for(int i = 0;i<s2.size();i++)
    {
        power = (power*base_prime)%base_mod;
    }

    for(int i = 0;i<s1.size();i++)
    {
        hash1 = hash1*base_prime+s1[i];
        hash1 %=base_mod;

        if(i>=s2.size())
        {
            hash1-=power*s1[i]
        }
    }
    return 0;
}
