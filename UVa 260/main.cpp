#include <bits/stdc++.h>

using namespace std;

int n;
char a [200 + 5] [200 + 5];
bool vis [200 + 5] [200 + 5];
char output;

int dr [] = {-1, -1, 0, 0, 1, 1};
int dc [] = {-1, 0, -1, 1, 0, 1};

void dfs (int x, int y, char curr)
{
    if ( x < 0 || y < 0 || x == n || y == n || a [x] [y] != curr || vis [x] [y] ) return;
    if ( y == n - 1 && a [x] [y] == 'w' ) { output = 'W'; return; }
    if ( x == n - 1 && a [x] [y] == 'b' ) { output = 'B'; return; }

    vis [x] [y] = true;



    for ( int i = 0; i < 6; i++ )
        dfs (x + dr [i], y + dc [i], curr);
}

int main() {
    int cases = 0;

    while ( scanf ("%d", &n) and n ) {
            output='m';
        for ( int i = 0; i < n; i++ ) scanf ("%s", a [i]);

        memset (vis, false, sizeof (vis));

        for ( int i = 0; i < n; i++ )
            if ( !vis [0] [i] && a [0] [i] == 'b'&& output=='m' ) dfs (0, i, 'b');

        for ( int i = 0; i < n; i++ )
            if ( !vis [i] [0] && a [i] [0] == 'w' && output=='m') dfs (i, 0, 'w');

        printf ("%d %c\n", ++cases, output);
    }

    return 0;
}
