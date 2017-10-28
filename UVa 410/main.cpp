#include <bits/stdc++.h>

//here is a great problem in this problem what should i got :(
using namespace std;

int main()
{

    int c,s,arr[50],inpt;
    float imb;
    int counter=1;
    while(cin>>c>>s)
    {
        imb=0;
        memset(arr,0,sizeof(arr));
        for(int i=0;i<s;i++)
        {
            cin>>inpt;
            imb+=inpt;
            arr[i]=inpt;
        }
        imb/=c;

        sort(arr,arr+c*2);

        float r=0;

        cout<<"Set #"<<counter++<<endl;
        for(int i=0;i<c;i++)
        {
            cout<< " "<<i<<":";
            if(arr[i]!=0)
                cout<<" "<<arr[i];
                if(arr[2*c-1-i]!=0)
                cout<<" "<<arr[2*c-i-1];
                cout<<endl;
                int t=0;
                t+=arr[i]+arr[c*2-1-i];
                r+=fabs(t-imb);
        }
        cout<<"IMBALANCE = ";
        printf("%.5f\n",r);
        cout<<endl;
    }
    return 0;
}
