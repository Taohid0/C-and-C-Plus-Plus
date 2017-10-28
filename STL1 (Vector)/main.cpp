#include <bits/stdc++.h>


int main()
{
   std::vector<int>v;

    v.push_back(10);
    v.push_back(15);
    v.push_back(20);

    int s = v.size();
    for(int i = 0;i<s;i++){

    printf("%d\n",v[i]);
    }
    for(std::vector<int>::iterator itr = v.begin(); itr!=v.end(); itr++){
                printf("%d\n",*itr);
}

    return 0;
}
