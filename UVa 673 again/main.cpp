#include <bits/stdc++.h>

using namespace std;

int main()
{

    char temp;
    int test,i;
    cin>>test;
    string inpt;
    while(test--)
    {stack<char>s;
        cin>>inpt;

        for(i = 0;i<(int)inpt.size();i++)
        {
            if(inpt[i]=='(' || inpt[i]=='[')
                {
                    s.push(inpt[i]);
                }
            else
            {   if(s.empty())
            {
                break;
            }
                temp = s.top();
                if(temp =='(' && inpt[i]==')'){
                     s.pop();
                }

                else if(temp =='[' && inpt[i]==']'){
                     s.pop();
                }
                else
                    break;
              }


            }
            if(s.empty() && i==(int)inpt.size())
            {
                cout<<"Yes"<<endl;
            }
            else
                cout<<"NO"<<endl;

//             for(int i = 0;i<(int)s.size();i++)
//             {
//                 cout<<s.top()<<endl;s.pop();
//             }
//             cout<<(int)s.size();
//             cout<<endl<<endl;



    }

    return 0;
}
