#include <stdio.h>
#include <string.h>

bool is_vowel (char x)
{
    if ( x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' )
        return true;

    return false;
}

bool check (char x [], char y [])
{
    int len_x = strlen (x);
    int len_y = strlen (y);

    if ( len_x != len_y )
        return false;

    for ( int i = 0; i < len_x; i++ ) {
        if (!is_vowel (x [i]) && x [i] != y [i])
            return false;
    }

    return true;

}

int main ()
{
    int testCase;
    scanf ("%d", &testCase);

    while ( testCase-- ) {
        char first [25];
        char second [25];

        scanf ("%s %s", first, second);

        if ( check (first, second) )
            printf ("Yes\n");
        else
            printf ("No\n");
    }

    return 0;
}
