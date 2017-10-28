#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct book
{
    char name ;
    float price ;
    int pages ;
    } ;
    struct book b1, b2, b3 ;
    printf ( "\nEnter names, prices & no. of pages of 3 books\n" ) ;
    scanf ( "%c %f %d", &b1.name, &b1.price, &b1.pages ) ;
    scanf ( "%c %f %d", &b2.name, &b2.price, &b2.pages ) ;
    scanf ( "%c %f %d", &b3.name, &b3.price, &b3.pages ) ;
    printf ( "\nAnd this is what you entered" ) ;
    printf ( "\n%c %.2f %d", b1.name, b1.price, b1.pages ) ;
    printf ( "\n%c %.2f %d", b2.name, b2.price, b2.pages ) ;
    printf ( "\n%c %.2f %d", b3.name, b3.price, b3.pages ) ;

    return 0;
}
