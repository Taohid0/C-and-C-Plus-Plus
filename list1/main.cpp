#include <bits/stdc++.h>


int main()
{
    std::list<int>l1;

    l1.push_back(10);
    l1.push_front(20);
    l1.push_front(221);l1.push_front(202);l1.push_front(320);l1.push_front(205);l1.push_front(520);

    printf("%d",(int)l1.size());

    std::list<int>::iterator itr = find(l1.begin(),l1.end(),320);
    printf("\n%d\n",*itr);
    l1.insert(itr,5);

    for(std::list<int>::iterator it=l1.begin();it!=l1.end();it++){
        printf("%d   ",*it);
    }
    return 0;
}
