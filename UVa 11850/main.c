#include <stdio.h>
#include <stdlib.h>

int main()
{   long int station[100000],i,j,n,f,st1,st2,result,o,p,temp;

   while(scanf("%ld",&n)==1){
        if(n==0){
            break;
        }
        f=1;
    for(i=0;i<n;i++){
        scanf("%ld",&station[i]);
    }
    for(o=1;o<n;o++){
            for(p=0;p<n-1;p++){
                    if(station[p]>station[p+1]){
                        temp = station[p];
                        station[p] = station[p+1];
                        station[p+1] = temp;
                    }
            }}
     st1 = station[0];
    for(j=0;j<n;j++){


        st2 = station[j];
        if(st1>st2){
             result = st1-st2;}
        else
        {
            result = st2-st1;
        }
        st1 = st2;



        if(result>200){
                break;
        }}
        if((1422-station[n-1])>100){
            f = 0;
        }
    if(j==n && f!=0){
        printf("POSSIBLE\n");
    }
    else
        printf("IMPOSSIBLE\n");}

    return 0;
}


