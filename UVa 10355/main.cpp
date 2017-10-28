#include <bits/stdc++.h>

using namespace std;

using namespace std;

int a[5];
char ans[2][12] = { "Impossible", "Possible" };
int find(int sum, int i) {
    if (i == 5)
        return sum == 23 ;
    return find(sum + a[i], i + 1) || find(sum - a[i], i + 1) || find(sum * a[i], i + 1) ;
}
int main() {
    //int c=0;
    while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4])
        if (a[0] || a[1] || a[2] || a[3] || a[4]) {
            sort(a, a + 5);
            int found = 0;
            do {
                if (found |= find(a[0], 1))
                    break;
                    cout<<c++<<" "<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<endl;
            } while (next_permutation(a, a + 5));

            cout << ans[found] << endl;
        }
    return 0;
}
