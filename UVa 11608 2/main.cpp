#include <stdio.h>

int main ()
{
 int problemNumber;
 int month [15];
 int required [15];
 int Case = 0;

 while ( scanf ("%d", &problemNumber) ) {

  if ( problemNumber < 0 )
   return 0;

  month [0] = problemNumber;

  int i;
  for ( i = 1; i < 13; i++ )
   scanf ("%d", &month [i]);

  for ( i = 0; i < 12; i++ )
   scanf ("%d", &required [i]);

  printf ("Case %d:\n", ++Case);

  for ( i = 0; i < 12; i++ ) {

   if ( problemNumber >= required [i] ) {
    problemNumber -= required [i];
    printf ("No problem! :D\n");
   }

   else
    printf ("No problem. :(\n");

   problemNumber += month [i + 1];
  }
 }

 return 0;
}
