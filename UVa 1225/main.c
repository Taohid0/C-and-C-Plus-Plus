#include <stdio.h>
#include <stdlib.h>

int main()
{   int t,num,i,j,temp;
    scanf("%d",&t);
    while(t--){
            scanf("%d",&num);
        int one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0,zero=0;
        for(i=1;i<=num;i++){
            if(i<10){
                if(i==1){
                     one++;
                }
                else if(i==2){
                     two++;
                }
                else if(i==3){
                     three++;}

                else if(i==4){
                     four++;
                }
                else if(i==5){
                     five++;}

                else if(i==6){
                     six++;}

                else if(i==7){
                     seven++;}

                else if(i==8){
                     eight++;}

                else if(i==9){
                     nine++;}

            }
            else{
                    j=i;
            while(j>0){
                temp=j%10;
                if(temp==0){
                    zero++;
                }
                if(temp==1){
                     one++;
                }
                else if(temp==2){
                     two++;}

                else if(temp==3){
                     three++;}

                else if(temp==4){
                     four++;
                }
                else if(temp==5){
                     five++;}

                else if(temp==6){
                     six++;
                }
                else if(temp==7){
                     seven++;}

                else if(temp==8){
                     eight++;}

                else if(temp==9){
                     nine++;}
                j/=10;}
            }


        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",zero,one,two,three,four,five,six,seven,eight,nine);
    }
    return 0;
}
