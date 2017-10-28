 #include<stdio.h>
    int main()
    {
    int n,num[1001],flip,i,j;
    while(scanf("%d",&n)==1)
    {if(n==0){
    break;}
    for(i=1;i<=n;i++)
    {
    scanf("%d",&num[i]);
    }
    flip=0;
    for(i=1;i<=n;i++)
    {
    for(j=i+1;j<=n;j++)
    {
    if(num[i]>num[j])
    flip++;
    }
    }
    printf("Minimum exchange operations : %d\n",flip);
    }
    return 0;
    }
