#include <bits/stdc++.h>

using namespace std;
string nums [10000 + 10];

bool prefix_check (string a, string b)
{
    if ( b.size () < a.size () ) return false;

    for ( size_t i = 0; i < a.length (); i++ ) {
        if ( a [i] != b [i] ) return false;
    }

    return true;
}

int main ()
{
    int testCase;
    scanf ("%d", &testCase);

    while ( testCase-- ) {
        int n;
        scanf ("%d", &n);

        for ( int i = 0; i < n; i++ ) cin >> nums [i];

        sort (nums, nums + n);

        bool flag = true;

        for ( int i = 0; i < n - 1; i++ ) {
            if ( prefix_check (nums [i], nums [i + 1]) ) { flag = false; break; }
        }

        if ( flag ) printf ("YES\n");
        else printf ("NO\n");
    }

    return 0;
}
