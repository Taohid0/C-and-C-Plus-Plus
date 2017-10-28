#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,abcde,fghij;
    bool test = false;
    while(true)
    {
        bool flag =true;
        cin>>n;

        if(n==0)break;
         if(test)cout<<endl;
        int denom = 98766/n;
        test = true;
        for(fghij = 1234;fghij<=denom;fghij++)
        {
            abcde= fghij*n;
            int temp,used;
            used = fghij<10000;
            temp = abcde;
            while(temp)
            {
                used|=1<<(temp%10);
                temp/=10;
            }
            temp = fghij;
            while(temp)
            {
                used|=1<<(temp%10);
                temp/= 10;
            }
            if(used==(1<<10)-1)
            {
                flag = false;
                printf("%.5d / %.5d = %d\n",abcde,fghij,n);
            }
        }
        if(flag)
        {
            cout<<"There are no solutions for "<<n<<"."<<endl;
        }

    }
    return 0;
}
