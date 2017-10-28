#include <stdio.h>
#include <stdlib.h>

 int main()
{
    FILE *book2;
    char ch;

    book2 = fopen("input.txt","w");
    while((ch=getchar()) != EOF)
          putc(ch,book2);

    fclose(book2);

    book2 = fopen("input.txt","r");
      while((ch=getc(book2)) != EOF)
        printf("%c",ch);

    fclose(book2);

    return 0;
}
