#include <bits/stdc++.h>

using namespace std;

int main()
{
    int height,width,x,prev,difference,result;

    while(1)
    {
         result = 0;
        cin>>height>>width;
        if(!height && !width)
        {
            break;
        }
        prev = height;

        for(int i = 0;i<width;i++)
        {
            cin>>x;
            if(x<prev)
            {
                difference =prev-x;
                result+=difference;
            }
            prev = x;
        }
        cout<<result<<endl;
    }
    return 0;
}
