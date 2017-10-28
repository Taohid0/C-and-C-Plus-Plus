#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::priority_queue<int, std::vector<int>, std::greater<int> > my_min_heap;
    my_min_heap.push(5);
    my_min_heap.push(2);

    while(!my_min_heap.empty())
    {
        cout<<my_min_heap.top()<<endl;
        my_min_heap.pop();
    }

    return 0;
}
