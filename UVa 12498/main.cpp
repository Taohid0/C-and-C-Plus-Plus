#include <bits/stdc++.h>

using namespace std;

int main()
{
    char arr[100][100];
    int test,row,column;
    cin>>test;bool prnt;
    for(int I = 1;I<=test;I++)
    {
        prnt = true;
        cin>>row>>column;
        for(int i = 0;i<row;i++)
        {
            for(int j = 0;j<column;j++)
            {
                cin>>arr[i][j];
            }
        }
        int diff =999999;
        int result;
        bool flag1,flag2;
        for(int i = 0;i<row;i++)
        {
            flag1 =false;
            flag2 =false;
            int temp  = 0,temp2=0;
            for(int j = i;j<column;j++)
            {

                if(arr[i][j]=='0')
                {
                    flag1= true;break;
                }
                temp++;
            }
            for(int j= i;j>=0;j++)
            {
                if(arr[i][j]=='0')
                {
                    flag2 =true;
                    break;
                }
                temp2++;
            }
            if(!flag1 && ! flag2)prnt = false;

            else if(flag1 && flag2)
            temp = min(temp,temp2);
            else if(!flag1 && flag2)temp =temp2;
            if(diff>temp)
            {
                result = i;
                diff = temp;
            }
        }
        if(prnt)
        cout<<"Case "<<I<<": "<<result<<endl;
     else
        cout<<"Case "<<I<<": -1"<<endl;
    }
    return 0;
}
