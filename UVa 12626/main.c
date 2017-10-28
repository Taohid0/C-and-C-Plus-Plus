#include <stdio.h>
#include <string.h>

int main()
{   char s[1000];
    int test,a,m,r,t,i,i2,g,result,l;
    scanf("%d\n",&test);
    while(test--){
        gets(s);
      a=0,m=0,r=0,t=0,i2=0,result =0,g=0;

        l = strlen(s);
        for(i=0;i<l;i++){
            if((s[i])=='A'){
                a++;}
            if((s[i])=='M'){
                m++;
            }
                if((s[i])=='R'){
                    r++;
                }
                if((s[i])=='G'){
                    g++;
                }
                if((s[i])=='T'){
                    t++;
                }
                if((s[i])=='I'){
                    i2++;
                }


        }
        while(a>=3 && i2>0 && m>0 && r>=2 && g> 0 && t>0){
            result+=1;
            a-=3;
            r-=2;
            m-=1;
            g-=1;
            t-=1;
            i2-=1;
        }
        printf("%d\n",result);
    }
    return 0;
}
