#include <stdio.h>
#include <stdlib.h>

int main()
{ char ch;

    scanf("%c",&ch);

    while(ch!='y' || ch!='y'){
    printf("are you sure you want to quit?\n");
    scanf("%c",&ch); }

    return 0;
}
