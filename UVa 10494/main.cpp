#include <bits/stdc++.h>

using namespace std;

void division(char s[],long long n)
{
    int num,rem = 0;
    bool flag = true;
    int length = strlen(s);

    for(int i = 0;i<length;i++)
    {
        num = s[i]-'0' + rem*10;
        if(num/n!=0){
            flag = false;
        }
        if(!flag)
        {
            cout<<num/n;
        }
        rem = num%n;
    }
    if(flag)
    {
        cout<<0;
    }
}
void mod (char s[],long long n){

           int rem = 0,num;
           int length = strlen(s);

           for(int i = 0;i<length;i++)
           {
               num = s[i]  - '0'+rem*10;
               rem = num%n;
           }
           cout<<rem;
           }
int main()
{
    char num[10000];
    long long n;
    char sign;


    while((scanf("%s %c %lld",num,&sign,&n)==3))
    {
        if(sign=='/')
        {
            division(num,n);
            cout<<endl;
        }
        else{
            mod(num,n);
            cout<<endl;
        }
    }
    return 0;
}
