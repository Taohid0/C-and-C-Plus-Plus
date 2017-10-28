#include <bits/stdc++.h>

using namespace std;
string merger[100];
int nMerger;
string s;
void readChanges()
{
    cin>>nMerger;

    for(int I = 0;I<nMerger;I++)
    {
        cin>>merger[I][0]>>merger[I][1];
    }
}

int findMatch(string toSearch,string inSearch)
{
    int toSearchLen,inSearchLen;
   toSearchLen = (int) toSearch.size();
   inSearchLen = (int)inSearch.size();

    for(int I = 0;I<inSearchLen;I++)
    {
        int J = 0;

        while(toSearch[J]==inSearch[I+J])
        {
            J++;
            if(J==toSearchLen)
            {
                return I;
            }
        }
    }
    return -1;
}

void replaceString(string toReplace,string replaced,int position)
{
    int stringLen = (int) s.size();
    int toReplaceLen = (int) toReplace.size();
    int replacedLen = (int) replaced.size();

    if(replacedLen<=toReplaceLen)
    {
        for(int I = position+toReplaceLen;I<stringLen;I++)
        {
            s[I+replacedLen-toReplaceLen] = s[I];
        }
    }
    else
        for(int I =stringLen-1;I>=position+toReplaceLen;I--)
    {
        s[I+replacedLen-toReplaceLen] = s[I];
    }

    for(int i = 0;i<replacedLen;i++)
    {
        s[position+i] = s[i];
    }
}
int main(){
              string s1,s2;

            getline(cin,s);
              getline(cin,s1);
               getline(cin,s2);
        //   readChanges();

           int n = findMatch(s1,s);

           replaceString(s2,s1,n);

           cout<<s;

    return 0;
}
