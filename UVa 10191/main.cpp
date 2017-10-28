#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

struct node {
    int start;
    int finish;
} a [105];

bool function2 (node x, node y)
{
    return x.start < y.start;
}

int main ()
{
    //almost same as my sdp project!!! here is an error in this code
    int s;
    int day = 0;

    while ( scanf ("%d", &s) != EOF ) {
        getchar ();

        char assignment [300];

        a [0].start = a [0].finish = 600;
        a [s + 1].start = a [s + 1].finish = 1080;

        for ( int i = 1; i <= s; i++ ) {

            gets (assignment);

            int hour1;
            int minute1;
            int hour2;
            int minute2;

            sscanf (assignment, "%d:%d %d:%d", &hour1, &minute1,
            &hour2, &minute2);

            a [i].start = hour1 * 60 + minute1;

            //scanf ("%d:%d", &hour, &minute);

            a [i].finish = hour2 * 60 + minute2;
        }

        sort (a, a + s + 2, function2);

        int time;
        int span;
        int max = 0;

        for ( int i = 1; i <= s + 1; i++ ) {
            span = a [i].start - a [i - 1].finish;
            if ( span > max ) {
                max = span;
                time = a [i - 1].finish;
            }
        }

        if ( max < 60 )
            printf ("Day #%d: the longest nap starts at %d:%.2d and will last for %d minutes.\n",
            ++day, time / 60, time % 60, max);
        else
            printf ("Day #%d: the longest nap starts at %d:%.2d and will last for %d hours and %d minutes.\n",
            ++day, time / 60, time % 60, max / 60, max % 60);
    }

    return 0;
}
