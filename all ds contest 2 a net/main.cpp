#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;

const int maxnode = 111111;
const int sigma_size = 52;
int ch[maxnode][sigma_size];
int val[maxnode];
int sz;
void init()
{
    sz = 1;
    memset(ch[0], -1, sizeof(ch[0]));
}
int idx(char c)
{
    if(c >= 'a' && c <= 'z')
        return c - 'a';
    else
        return c - 'A' + 26;
}

void insert(char *s)
{
    int u = 0, n = strlen(s);
    for(int i = 0; i < n; i++)
    {
        int c = idx(s[i]);
        if(ch[u][c] == -1)
        {
            memset(ch[sz], -1, sizeof(ch[sz]));
            val[sz] = 0;
            ch[u][c] = sz++;
        }
        u = ch[u][c];
    }
    val[u]++;
}
int find(char *s)
{
    int u = 0, n = strlen(s);
    for(int i = 0; i < n; i++)
    {
        int c = idx(s[i]);
        u = ch[u][c];
        if(val[u] == -1)
            return 0;
    }
    return val[u];
}

int main()
{
    int cas = 1;
    int T;
    scanf("%d", &T);
    while(T--)
    {
        init();
        int n;
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            char s[11111];
            scanf("%s", s);
            int len = strlen(s);
            if(len > 2)
            sort(s+1, s+len-1);
            insert(s);
        }
        scanf("%d", &n);
        getchar();
        printf("Case %d:\n", cas++);
        while(n--)
        {
            int sum = 1;
            char s[11111];
            gets(s);
            char *p = strtok(s, " ");
            while(p)
            {
                char str[11111];
                strcpy(str, p);
                int len = strlen(str);
                if(len > 2)
                    sort(str+1, str+len-1);
                sum *= find(str);
                p = strtok(NULL, " ");
            }
            printf("%d\n", sum);
        }
    }
    return 0;
}
