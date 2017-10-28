#include <bits/stdc++.h>

using namespace std;

int mx= 10000;
bitset<10000>bs;
vector<int>primesVector;
//here are errors on this code

void sieve()
{
    for(int i=2;i*i<mx;i++)
    {
        if(!bs[i])
        {
            for(int j = i*i;j<mx;j+=i)
            {
                bs[j]= 1;
            }
        }
    }
    for(int i= 2;i<mx;i++)
    {
        if(!bs[i])
        {
            primesVector.push_back(i);
        }
    }
}

int countDivisors(int n)
{
    sieve();
    int result=1;

    for(int i=0;i<primesVector.size();i++)
    {
        if(n%primesVector[i])
        {
            int cnt=1;

            while(n%primesVector[i]==0)
            {
                n/=primesVector[i];
                cnt++;
            }
            result*=cnt;
        }
    }
    return result;
}

int main()
{
    cout << countDivisors(36)<< endl;
    return 0;
}
