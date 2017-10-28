#include <bits/stdc++.h>

using namespace std;

#define MAX_N 1010
char T[MAX_N];
int SA[MAX_N];

bool cmp(int a,int b)
{
    return strcmp(T+a,T+b)<0;
}

int main()
{

    int n = (int)strlen(gets(T));
    for(int i = 0;i<n;i++)
    {
        SA[i]=i;
    }
    sort(SA,SA+n,cmp);
    for(int i = 0;i<n;i++)
    {
        printf("%d\t%s\n",SA[i],T+SA[i]);
    }
    return 0;
}
