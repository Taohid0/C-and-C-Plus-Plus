#include<stdio.h>
#include<string.h>
int main()
{
    char n1[30],n2[30];
    int i,l1,l2,t1,t2,s1,s2;
    float s;
    while(gets(n1))
    {
        gets(n2);
        l1=strlen(n1);
        l2=strlen(n2);
        t1=0;
        for(i=0;i<l1;i++)
        {
            if(n1[i]>='a'&&n1[i]<='z')
            t1+=n1[i]-96;
            else if(n1[i]>='A'&&n1[i]<='Z')
            t1+=n1[i]-64;
        }
        s1=0;
        while(t1!=0)
        {
            s1+=t1%10;
            t1/=10;
        }
            if(s1>9)
            {
              t1=s1;
              s1=0;
                while(t1!=0)
                {
                    s1+=t1%10;
                    t1/=10;
                }
            }
        t2=0;
        for(i=0;i<l2;i++)
        {
            if(n2[i]>='a'&&n2[i]<='z')
            t2+=n2[i]-96;
            else if(n2[i]>='A'&&n2[i]<='Z')
            t2+=n2[i]-64;
        }
        s2=0;
        while(t2!=0)
        {
            s2+=t2%10;
            t2/=10;
        }
            if(s2>9)
            {
              t2=s2;
              s2=0;
                while(t2!=0)
                {
                    s2+=t2%10;
                    t2/=10;
                }
            }
        if(s1>s2)
        s=(float)s2*100/(float)s1;
        else
        s=(float)s1*100/(float)s2;
        printf("%0.2f %%\n",s);
    }
   return 0;
}
