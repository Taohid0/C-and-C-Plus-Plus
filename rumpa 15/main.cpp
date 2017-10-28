#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,e,x,y,z,pages,frame,pt[20],i;

     printf("Enter the size of process :");
     scanf("%d",&a);
     printf("\nEnter the size of main memory :");
     scanf("%d",&b);
     printf("\nEnter the size of unit :");
     scanf("%d",&c);
     printf("\nEnter the logical address :");
     scanf("%d",&e);
     pages=a/c;
     frame=b/c;
     printf("\n\nNumber of pages :%d",pages);
     printf("\nNumber of frames :%d",frame);
     printf("\nEnter the page table:");

     for(i=0;i<pages;i++){
        scanf("%d",&pt[i]);
     }

      x=e/c;
      y=e%c;

      for(i=0;i<pages;i++){

        if(i==x){
                z=(pt[i]*c)+y;
        }

      }

    printf("\nPage Table:\n");
    printf("\n\t\tPage Number\t\tFrame Number");
     for(i=0;i<pages;i++){
        printf("\n\t\t%d\t\t\t%d\n",i,pt[i]);
     }

  printf("\nProcess Block:\n");
  for(i=0;i<pages;i++){
        if(i==x){
                y=pt[i];
    printf("\t\t  __________________\n");
    printf("\t%d\t |******************|\n",i);
    printf("\t\t |******************|\n");
    printf("\t\t  ------------------\n");

  }
  else{printf("\t\t  __________________\n");
    printf("\t%d\t |                  |\n",i);
    printf("\t\t |                  |\n");
    printf("\t\t  ------------------\n");
  }
    }


  printf("\nMain Memory Block:\n");
  for(i=0;i<frame;i++){
        if(i==y){
    printf("\t\t  __________________\n");
    printf("\t%d\t |******************|\n",i);
    printf("\t\t |******************|\n");
    printf("\t\t  ------------------\n");

  }
  else{printf("\t\t  __________________\n");
    printf("\t%d\t |                  |\n",i);
    printf("\t\t |                  |\n");
    printf("\t\t  ------------------\n");
  }
    }
    printf("\n\nPhysical Address :%d\n\n",z);

       return 0;
}
