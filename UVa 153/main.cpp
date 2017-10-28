#include <bits/stdc++.h>

using namespace std;

string s1,s2;
unsigned long long func (int len)
{
    int i = 0;
    do{
             i++;
          if(s1==s2)return i;
//           for(int j =0;j<len;j++)
//           {
//               cout<<s1[j];
//           }
//           cout<<endl;

    }while(next_permutation(s1.begin(),s1.end()));
}

int main()
{


   while(cin>>s1)
   {
       if(s1=="#")break;
       s2 =s1;

       sort(s1.begin(),s1.end());
        int len =(int)s2.size();
        unsigned long long ans = func(len);

        printf("%10llu\n",ans);
   }

    return 0;
}
