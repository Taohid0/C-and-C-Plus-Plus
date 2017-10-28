#include <bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int>pq;

    pq.push(10);
    pq.push(100);
    pq.push(50);

    while(!pq.empty()){
        cout<< pq.top()<<endl;
        pq.pop();
    }
    cout << "Hello world!" << endl;
    return 0;
}
