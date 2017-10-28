#include <stdio.h>
#include <stdlib.h>

int ct (int ct1,int ct2, int ct3 ){
            int ct0,ct;
            if(ct1>=ct2 && ct2>=ct3){
                ct0 = ct1 + ct2;
            }
            if(ct1>=ct2 && ct3>=ct2){
                ct0 = ct1 + ct3;
            }
            if(ct2>=ct1 && ct1>=ct3){
                ct0 = ct1 + ct2;
            }
            if(ct2>=ct3 && ct3>=ct1){
                ct0 = ct2 + ct3;
            }
            if(ct3>=ct1 && ct1>=ct2){
                ct0 = ct1 + ct3;
            }
            if(ct3>=ct2 && ct2>ct1){
                ct0 = ct2 + ct3;
            }
            ct = ct0 / 2;

            return ct;
}

int main()
{   int term1,term2,finall,attendence,ct1,ct2,ct3,t,i,total;

    scanf("%d",&t);

    for(i=1;i<=t;i++){
        scanf("%d%d%d%d%d%d%d",&term1,&term2,&finall,&attendence,&ct1,&ct2,&ct3);

    total = term1+term2+finall+attendence+ct(ct1,ct2,ct3);

    if(total>=90){
        printf("Case %d: A\n",i);
    }
    if(total>=80 && total<90){
        printf("Case %d: B\n",i);
    }
    if(total>=70 && total<80){
        printf("Case %d: C\n",i);
    }
    if(total>=60 && total<70){
        printf("Case %d: D\n",i);
    }
    if(total<60){
        printf("Case %d: F\n",i);
    }
    }
    return 0;
}
