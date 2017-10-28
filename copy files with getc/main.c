#include <stdio.h>
#include <stdlib.h>

int main()
{   FILE *even,*even1;
    char ch;

    even = fopen("D:/data/even.txt","r");

    if(even==NULL){
        printf("cannot open even file");
        exit(1);
    }
    even1 = fopen("D:/data/even1.txt","w");

    if(even1 == NULL){
        printf("cannot open even1 file");
        fclose(even);
        exit(1);
    }
    while(1){
            ch = fgetc(even);

            if(ch==EOF){
                break;
            }
        fputc(ch,even1);
    }
    fclose(even);
    fclose(even1);


    return 0;
}
