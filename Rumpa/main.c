#include <stdio.h>

int main()
{
char n;
printf("Enter symbol :\n");
scanf("%c",&n);
if(n>=65&&n<=90){
printf("You enter a capital later");
}
else if(n<=122&&n>=97){
printf("You enter a small later");
}
else if(n<=57&&n>=48){
printf("You enter a digis like 1 2 3 4.....");
}
else if((n<=47&&n>=0)||(n<=64&&n>=58)||(n<=96&&n>=91)||(n<=127&&n>=123)){
printf("You enter special symbol");
}

return 0;
}
