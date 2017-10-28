#include <stdio.h>
#include <string.h>

int main()
{char wor[100000],temp[105],p[105];
int l,i,max,b,ll,c;
    while((gets(wor))){


        if(strcmp(wor,"E-N-D")==0){
            break;
        }
        max = -1;
        l =strlen(wor);
        b=0;c= 0;
        for(i=b;i<l;i++){
            if((wor[i]>=65 && wor[i]<=90) || (wor[i]>=97 && wor[i]<=122) || wor[i]==45){
                    temp[c] = wor[i];
                    c++;
            }
            else
            c= 0;
                b=i;
            ll = strlen(temp);
            if(max<ll){
                max=ll;
                strcpy(p,temp);
            }

            }
      printf("%s\n",p);
        }
    return 0;
}
