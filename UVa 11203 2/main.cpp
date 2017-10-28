#include <bits/stdc++.h>

using namespace std;
//net code
int check(char s[]) {
    int a, b, c, i = 0;
    a = 0, b = 0, c = 0;
    while(s[i] == '?')  a++, i++;
    if(s[i] != 'M') return 0;
    i++;
    while(s[i] == '?')  b++, i++;
    if(s[i] != 'E') return 0;
    i++;
    while(s[i] == '?')  c++, i++;
    if(s[i] != '\0')    return 0;
    return a == (c-(b-1))-1 && a && b;
}
int main() {
    int testcase;
    char s[105];
    scanf("%d", &testcase);
    while(testcase--) {
        scanf("%s", s);
        puts(check(s) ? "theorem" : "no-theorem");
    }
    return 0;
}
