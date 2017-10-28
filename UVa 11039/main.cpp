#include <cstdio>
#include <cmath>
#include <algorithm>
 //net code
struct cmp {
  bool operator()(const int a, const int b) const {
    return abs(a) < abs(b);
  }
};

int main() {
  int T, n, num[500000];
  scanf("%d", &T);
  while (T--) {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
      scanf("%d", &num[i]);
    }
    std::sort(num, num + n, cmp());
    int max = 0;
    for (int i = 0; i < n; i++) {
      if (i && ((num[i] < 0 && num[i - 1] < 0) || (num[i] > 0 && num[i - 1] > 0))) {
        continue;
      }
      max++;
    }
    printf("%d\n", max);
  }
  return 0;
}
