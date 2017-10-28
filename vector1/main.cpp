#include <bits/stdc++.h>


int main()
{

    std::vector<int>v;

    v.push_back(10);
    v.push_back(50);
    v.push_back(100);

    for(std::vector<int>::iterator itr=v.begin();itr!=v.end();itr++){
        printf("%d\n",*itr);
    }

    return 0;
}
