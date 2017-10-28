#include<vector>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<cmath>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <cstdlib>
#include <stack>
#include <iomanip>
#include <limits>
using namespace std;

#define fi(i,a,b) for(int i=(int)a;i<=(int)b;i++)
#define fd(i,a,b) for(int i=(int)a;i>=(int)b;i--)
#define rep(i,n)  for(int i=0;i<n;i++)
#define SET(a) memset(a,-1,sizeof(a))
#define ALL(a) a.begin(),a.end()
#define CLR(a) memset(a,0,sizeof(a))
#define FILL(a,v) memset(a,v,sizeof(a))
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define INF (1<<29)
#define EPS 1e-9
#define PI acos(-1.0)
//stl
 #define sz(a) int((a).size())
 #define pb push_back
 #define all(c) ((c).begin(),(c).end())
 #define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
 #define present(c,x) ((c).find(x) != (c).end())
 #define cpresent(c,x) (find(all(c),x) != (c).end())
 #define pf printf
 #define sf scanf


typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii>    vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
typedef map<string,int> msi;

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    getchar();
    int dp[101][101];
    while(t--)
    {
        int dim;
        char line[1001];
        int r=0;
        while(gets(line) && line[0])
        {
            r++;
            dim=strlen(line);
            for(int i=1;i<=dim;i++)
            {
                dp[r][i]=line[i-1]-'0';
            }
        }
//        for(int i=1;i<=dim;i++)
//        {
//            for(int j=1;j<=dim;j++)
//                cout<<dp[i][j];
//            cout<<endl;
//
//        }

        //pre proccessing
        fi(i,1,dim)
        {
            fi(j,1,dim)
            {
                dp[i][j]+=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
            }

        }

//
//        for(int i=1;i<=dim;i++)
//        {
//            for(int j=1;j<=dim;j++)
//                cout<<dp[i][j]<<"  ";
//            cout<<endl;
//
//        }

        int mx=numeric_limits<int>::min();
        fi(i,1,dim)
        {
            fi(j,1,dim)
            {
                fi(k,i,dim)
                {
                    fi(l,j,dim)
                    {
                        int temp=dp[k][l]-dp[i-1][l]-dp[k][j-1]+dp[i-1][j-1];
                        if(temp==(l-j+1)*(k-i+1))
                            mx=max(mx,temp);
                    }

                }

            }

        }
        if(mx==numeric_limits<int>::min())
         mx=0;
        cout<<mx<<endl;

        if(t)
            cout<<"\n";



    }//end of while
    return 0;

}
