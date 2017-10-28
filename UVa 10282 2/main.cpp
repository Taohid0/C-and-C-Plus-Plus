#include<iostream>
#include<cstdio>
#include<map>
#include<sstream>
using namespace std;
#define MAX 1005
map<string, string>M;
char line[MAX];

int main()
{
    string s1, s2;
    while(gets(line))
    {
        if(line[0]=='\0') break;
        stringstream ss(line);
        ss >> s1;
        ss >> s2;
        M[s2] = s1;
    }
    string s3;
    while(cin >> s3)
    {
        if(M[s3].length()==0)
        {
          cout << "eh" << endl;
        }
        else
        {
          cout << M[s3] <<endl;
        }
    }
    return 0;
}
