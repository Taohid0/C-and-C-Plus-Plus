# include <stdio.h>

int main(void)
{
int i ;

typedef struct
{
char bname[80];
int pages, price ;
} book ;

book info[3] ;

for(i=0 ; i < 3 ; i++)
{
printf("\nEnter the book(%d) name :", i+1);
getchar();
gets(info[i].bname);

printf("\nEnter the book(%d) pages :",i+1);
scanf("%d", &info[i].pages);
printf("Enter the book(%d) price :",i+1);
scanf("%d", &info[i].price);
}
printf("\n--------- Book Details ------------ ");

for(i=0 ; i < 3 ; i++)

{
printf("\nThe book name : %s",info[i].bname );
printf("\nThe book pages :%d", info[i].pages);
printf("\nThe book prices :%d\n",info[i].price);
}

return 0;
}
