#include <bits/stdc++.h>

using namespace std;

int binary_representation(int n)
{
    int r = 0,remain;
    while(n)
    {
        remain= n%2;
        n/=2;
        if(remain)
            r++;
    }
    return r;
}
int hexadeciman_representation(int n)
{
    int r=0,remain;
    while(n)
    {
        remain = n%10;
        n/=10;
        if(remain==1||remain==2||remain==4||remain==8)
        {
            r+=1;
        }
        else if(remain==3 || remain==5||remain==6||remain==9)
        {
            r+=2;
        }
        else if (remain==7)
        {
            r+=3;
        }

    }return r;
}

int main()
{
    ios::sync_with_stdio(false);
    int test,b1,b2,number;

    cin>>test;

    while(test--)
    {
        cin>>number;
        b1 = binary_representation(number);
        b2 = hexadeciman_representation(number);

        cout<<b1<<" "<<b2;
        cout<<endl;
    }
    return 0;
}
