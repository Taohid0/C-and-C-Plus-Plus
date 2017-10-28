#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;

const int MAXN = 1 * 1000 + 10;

int main () {
    ios::sync_with_stdio(false);

    int n, c = 1; cin >> n;
    ll p = 1, ans = 0;

    while (p * 10 <= n) {
	ans += p * 9 * c;
	p *= 10;
	c ++;
    }

    if (n >= p) ans += (n - p + 1) * c;

    cout << ans << endl;
    return 0;
}
