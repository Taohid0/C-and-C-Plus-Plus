#include <stdio.h>
#include <string.h>

int main()
{   char msg[50] ;
    char div[50],word[20];
    int i,j,k=1;

    printf("Enter a message\n");

    //for(j=0;msg[j]!='\n';j++){
      //  for(i=0;i!=' ';i++){
     // scanf("%s",msg[i]);
     gets(msg);
            for(j=0;j!='\0';j++){
            for(i=0;i!=' ';i++){
              div[j] = msg[i];

            }k++;
            }

     printf("which word do u want to replace?\n");
     scanf("%s",word);

      for(i=0;i<k;i++){
     if(strcmp(div[i],word) == 0){
        strcpy(div[i],word);
        }

     }
     for(i=0;i!='\0';i++){
        printf("%s",div[i]);
     }

    return 0;
}
