#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    string s;
    cin >> s;
    int n = s.size() - 1;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] < s[n] && ((s[i] - '0') % 2 == 0))
        {
            swap(s[i], s[n]);
            cout << s;
            return 0;
        }
    }

    for (int i = n - 1; i >= 0; --i)
    {
        if ((s[i] - '0') % 2 == 0)
        {
            swap(s[i], s[n]);
            cout << s;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
