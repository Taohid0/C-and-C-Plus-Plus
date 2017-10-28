#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s="";
    char ch;
  //  char str[1000];
   // int indx=0;
    while(1)
    {

    ch = getchar();
    if(ch=='\n')break;
        if(ch=='a' || ch=='e' ||ch=='i'||ch=='o'||ch=='u' ||ch=='A' || ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='y' || ch=='Y')
        {
             continue;
        }
        else {
               s+='.';
               s+=tolower(ch);
               // str[indx++]='.';
               // str[indx++]=tolower(ch);

    }
    }

     cout<<s;
    return 0;
}
