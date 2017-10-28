#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int testCase;
    scanf ("%d", &testCase);

    while ( testCase-- ) {
        int x;
        int y;

        scanf ("%d %d", &x, &y);

        int diff = y - x;
        int count = 0;
        int start = 1;
        bool flag = false;

        while ( diff > 0 ) {
            diff -= start;
            count++;
            if ( flag )
                start++;
            flag = !flag;
        }

        printf ("%d\n", count);
    }

    return 0;
}
