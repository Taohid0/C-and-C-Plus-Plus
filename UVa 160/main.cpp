#include <bits/stdc++.h>

using namespace std;
bitset<101>bs;
vector<int>v;
  int fre[101];
void sieve()
{
    for(int i = 2;i<=10;i++)
    {
        if(bs[i]==0)
        for(int j = i*i;j<=100;j+=i)
        {
            bs[j]=true;
        }
    }
    for(int i = 2;i<=100;i++)
    {
        if(bs[i]==0)v.push_back(i);
    }
}
//submitted net code,presentation error.frustrating :(

int main()
{
    sieve();
   int n;

 int len = (int)v.size();

   while(cin>>n)
   {
       if(n==0)break;
       memset(fre,0,sizeof(fre));

        for(int i = 2;i<=n;i++)
        {
            int temp=i;
            while(temp>1)
            {
                for(int j = 0;j<len;j++)
                {
                    while(temp%v[j]==0)
                    {
                        fre[v[j]]++;
                        temp/=v[j];
                    }
                    if(v[j]>temp)
                    {
                        if(temp>1)

                        {
                            fre[temp]++;
                            temp=0;
                            break;
                        }
                    }
                }

            }
        }
        printf("%3d! =",n);
        int prnt=0;
        for(int i = 2;i<101;i++)
        {

          if(prnt==15)
                  {
                      printf("\n%6c",' ');
                      prnt=0;
                  }
                  if(fre[i]){
                    printf("%3d",fre[i]),prnt++;}

        }
       cout<<endl;

        }


    return 0;
}
