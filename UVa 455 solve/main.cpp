#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>

using namespace std;

string str;

bool isRepeat (int l)
{
    int round = str.length () / l;

    if ( round * l !=(int) str.length () ) return false;

    string sub = str.substr (0, l);
    int start = 0;

    while ( round-- ) {
        if ( sub != str.substr (start, l) ) return false;
        start += l;
    }

    return true;
}

int main ()
{
    int testCase;
    scanf ("%d", &testCase);
    bool blank = false;

    while ( testCase-- ) {
        cin >> str;
        int len = str.length () / 2;

        if ( blank ) printf ("\n"); blank = true;
        bool printed = false;

        for ( int i = 0; i < len; i++ ) {
            if ( isRepeat (i + 1) ) { printf ("%d\n", i + 1); printed = true; break; }
        }

        if ( !printed ) printf ("%d\n", str.length ());
    }

    return 0;
}
