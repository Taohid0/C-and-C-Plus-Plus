#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        printf("%d", i + 1);
        for (int j = 1; j < n; ++j)
        {
            printf(" %d", n * j + (i + j) % n + 1);
        }
        printf("\n");
    }
    return 0;
}
