#include <stdio.h>
#include <stdlib.h>

void sort (int arr[],int n){
         int i,temp,j,l;

        for(i=1;i<n;i++){
            for(j=0;j<n-1;j++){
                    if(arr[j]>arr[j+1]){
                        temp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = temp;
                    }
            }

        } for(l=0;l<n;l++){
               printf("%-5d",arr[l]);
            }}

int main()
{int n,i,num[20];

    printf("how many number do you want to enter ?\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    sort (num,n);
    return 0;
}
