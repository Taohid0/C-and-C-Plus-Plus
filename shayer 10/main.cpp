#include <iostream>
#include<conio.h>

using namespace std;

const int ignore = 0;
const int upper = 1;
const int lower = 2;
//static int oldcase;
void print(char *s,int how = -1)
{

    static int oldcase = ignore;
    cout<<oldcase<<endl;

    if(how<0) how = oldcase;
    while(*s)
    {
        switch(how)
        {
            case upper : cout<<(char)toupper(*s);
            break;
            case lower : cout<<(char)tolower(*s);
            break;
            default : cout<<*s;
        }
        s++;
    }
    oldcase = how;
}

int main()
{
    print("hello\n",ignore);
    print("hello\n",upper);
    print("hello\n");

    return 0;
}

