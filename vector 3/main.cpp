#include <bits/stdc++.h>


int main()
{
    std::vector<int>v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    std::vector<int>v2;

    v2.swap(v);

    printf("%d   v2 = %d",(int)v.size(),v2.size());


    return 0;
}
