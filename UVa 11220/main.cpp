#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string>output,result;
    string s,inpt;
    int test;
    stringstream ss;
    cin>>test;
    getline(cin,s);
     getline(cin,s);
    int cse = 1;

    while(test--)
    {
        while(getline(cin,s)){

            if((int)s.size()==0)break;

             ss<<s;

             while(ss>>inpt){
                output.push_back(inpt);

             }
             int index = 0;
             string word = "";
             for(int i = 0;i<(int)output.size();i++)
             {
                 if(index<(int)output[i].size()){
                    word+=output[i][index];
                    index++;
                 }
             }
             result.push_back(word);
             ss.clear();
             output.clear();

        }
        cout<<"Case #"<<cse++<<":"<<endl;
        for(int i = 0;i<(int)result.size();i++)
        {
            cout<<result[i]<<endl;
        }
        if(test)cout<<endl;

        result.clear();
    }
    return 0;
}
