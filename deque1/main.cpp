#include <bits/stdc++.h>

int main()
{

    std::deque<int>d;

    d.push_back(1);
    d.push_back(2);
    d.push_front(0);
    d.push_front(5);

    printf("%d",(int)d.size());
    printf("\ndeque = %d\n",d[0]);
    for(std::deque<int>::iterator itr=d.begin();itr!=d.end();itr++){
       printf("%d ",*itr);
    }
    d.
    return 0;
}
