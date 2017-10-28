#include <stdio.h>
#include <string.h>
const int N = 205;
//net,my previous solution was too complicated..it was solve previously
int n, k, a[N], t[N];
char ans[N];

void init() {
	int cnt;
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	for (int i = 1; i <= n; i++) {
		int p = a[i];
		for (cnt = 1; p != i; cnt++, p = a[p]);
		t[i] = cnt;
	}
}

void solve() {
	char tmp[N], code[N];
	int p[N], cnt;
	memset(tmp, ' ', sizeof(tmp));
	for (int i = 1; ans[i]; i++)
		tmp[i] = ans[i];
	for (int i = 1; i <= n; i++) p[i] = i;

	for (int i = 1; i <= n; i++) {
		cnt = k % t[i];
		for (int j = 0; j < cnt; j++) p[i] = a[p[i]];
	}

	for (int i = 1; i <= n; i++)
		code[p[i]] = tmp[i];
	for (int i = 1; i <= n; i++)
		printf("%c", code[i]);
	printf("\n");
}

int main () {
	while (scanf("%d", &n), n) {
		init();
		while (scanf("%d", &k), k) {
			gets(ans);

			solve();

			memset(ans, 0, sizeof(ans));
		}
		printf("\n");
	}
	return 0;
}
