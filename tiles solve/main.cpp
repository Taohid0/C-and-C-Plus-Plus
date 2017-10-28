#include <cstdio>
#include <iostream>

using namespace std;

int main ()
{
    int n;
    int m;
    int a;

    scanf ("%d %d %d", &n, &m, &a);

    long long flagsByRow;

    if (n % a == 0) {
        flagsByRow = n / a;

    } else {
        flagsByRow = n / a;
        flagsByRow++;

    }

    long long flagsByColumn;

    if (m % a == 0) {
        flagsByColumn = m / a;

    } else {
        flagsByColumn = m / a;
        flagsByColumn++;

    }

    cout << flagsByRow * flagsByColumn << endl;

    return 0;
}


