#include <bits/stdc++.h>

using namespace std;

int main()
{
    //string sentence;
   char sentence[100];
    char* word;

  // getline(cin,sentence);
   //cin.getline(sentence);
    gets(sentence);
    word = strtok(sentence," ,");
    while(word!=NULL)
    {
        cout<<word<<endl;
        word = strtok(NULL,", ");
    }

    return 0;
}
