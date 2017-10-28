#include <stdio.h>
#include <stdlib.h>

int main()
{char ch;


    printf("enter a letter\n");
    ch = getchar();

   while(ch!='#'){

    switch(ch){
    case 'a' : case 'b' : case 'c' : printf("2");
    break;
    case 'd' : case 'e' : case 'f' : printf("3");
    break;
    case 'g' : case 'h' : case 'i' : printf("4");
    break;
    case 'j' : case 'k' : case 'l' : printf("5");
    break;
    case 'm' : case 'n' : case 'o' : printf("6");
    break;
    case 'p' : case 'q' : case 'r' : printf("7");
    break;
    case 's' : case 't' : case 'u' : case  'v' : printf("8");
    break;
    case 'w' : case 'x' : case 'y' : case 'z' : printf("9");

 } ch= getchar();
 }
return 0;

}
