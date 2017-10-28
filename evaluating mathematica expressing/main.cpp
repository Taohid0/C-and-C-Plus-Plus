#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;

    stack<char>stck;
    char arr[100] = {0};
    int index = 0;
    for(int i=  0;i<(int)s.length();i++)
    {

        if(s[i]>='0' && s[i]<='9')
        {
            arr[index++] = s[i];
        }
        else if((s[i]=='*' ||s[i]=='/' || s[i]=='+' || s[i]=='-' ) && !stck.empty() )
        {

            char top_element;
            top_element = stck.top();

            if(top_element=='*' || top_element=='/')
            {

                    arr[index++]= top_element;

                    stck.pop();
                    stck.push(s[i]);

            }
            else if((top_element=='+' || top_element=='-')&& (s[i]=='+' || s[i]=='-')){
                     arr[index++] = s[i];
                    arr[index++]= top_element;

                    stck.pop();}
                    else
                    {
                        stck.push(s[i]);
                    }
        }

        else if(s[i]==')')
        {
            while(1){
            char top_element;
            top_element  = stck.top();
            stck.pop();

            if(top_element=='(')
             {

                 break;
             }
            arr[index++] = top_element;
        }
        }
        else
        {
            stck.push(s[i]);
        }
    }
    while(!stck.empty())
    {
        char top_element = stck.top();
        stck.pop();
        arr[index++] = top_element;
    }
    for(int i = 0;i<index;i++)
    {
        cout<<arr[i]<<" " ;
    }
    return 0;
}
