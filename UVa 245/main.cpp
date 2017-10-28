#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c;
    vector<string>v;
    vector<string>::iterator it;
    while(c=getchar())
    {
        if(c=='0')break;

         int index = 0;
        while(isdigit(c))
        {
         index = index*10+(c-'0');
         c = getchar();
        }
       // cout<<"index "<<index<<endl;

        string temp="";
        if(index>0)
        {  //cout<<v.size()<< " "<<v.size()-index<<endl;
            string t = v[(int)v.size()-index];
            it = find(v.begin(),v.end(),t);
            cout<<v[(int)v.size()-index];
            v.erase(it);
            v.push_back(t);
        }
        while(isalpha(c))
        {
            temp+=c;
            c =getchar();
        }
       if((int)temp.size()){
        it =find(v.begin(),v.end(),temp);
          if(it!=v.end())
          {
              v.erase(it);
              v.push_back(temp);
              cout<<temp;
          }
          else v.push_back(temp),cout<<temp;
        }
        cout<<c;
    }
    return 0;
}
