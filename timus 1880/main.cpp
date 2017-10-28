#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int, int> arr;
    int ans = 0;
    for (int i = 0; i < 3; i ++)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; j ++)
        {
            int v;
            cin >> v;
            if (++arr[v] == 3)
            {
                ans ++;
            }
        }
    }
    cout << ans;
    return (0);
}
