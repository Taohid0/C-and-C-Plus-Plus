#include <bits/stdc++.h>

int main()
{
    int n, result(0);
    scanf("%d", &n);

    bool b[3001] = {false};
    int pfactors[3001] = {0};
    for (int i = 2; i <= n; ++i)
    {
        if (!b[i])
        {
            for (int j = i + i; j <= n; j += i)
            {
                b[j] = true;
                pfactors[j] += 1;
            }
        }

        if (pfactors[i] == 2)
        {
            result += 1;
        }
    }
    printf("%d\n", result);
    return 0;
}
