#include <stdio.h>


int main()
{   long int t,a,b,i;

    while(scanf("%ld",&t) != EOF){

    if(t<15){
    for(i=1;i<=t;i++){
    scanf("%ld%ld",&a,&b);

    if(a>b)
        printf(">\n");
    if(a<b)
        printf("<\n");
    if(a==b)
        printf("=\n");

    }}}



    return 0;
}
