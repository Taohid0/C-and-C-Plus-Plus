#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, count=0;
    string line1, line2;
    int index;
    string value;
    vector<pair<int, string> > store;
    cin>>t;
    getchar();
    while (t--) {
        getchar();
        count++;
        getline(cin, line1);
        getline(cin, line2);
        stringstream ss1(line1), ss2(line2);
        while (ss1>>index) {
            ss2>>value;
            store.push_back(pair<int, string>(index, value));
        }
        sort(store.begin(), store.end());
        if (count>1) {
            cout<<endl;
        }
        for (int i=0; i<(int)store.size(); i++) {
            cout<<store[i].second<<endl;
        }

        store.clear();
    }
    return 0;
}
