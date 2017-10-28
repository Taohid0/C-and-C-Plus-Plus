#include <bits/stdc++.h>

using namespace std;

int main()
{
    char sentent[100] = "i have a book";
    char *word;
    word = strtok(sentent," ");
    cout<<word<<endl;
    word = strtok(NULL," ");
    cout<<word;
    return 0;
}
