#include <bits/stdc++.h>


int main()
{
    std::vector<int>v(4);

    v.push_back(1);
    v.push_back(2);
    v.push_back(30);

    printf("%d\n",(int)v.size());


    for(std::vector<int>::iterator itr = v.begin();itr!=v.end();itr++){
        printf("%d  ",*itr);
    }
    v.clear();

    if(v.empty()){
        printf("\nvector is empty");
    }

    std::vector<int>vec2(v);

    for(std::vector<int>::iterator itr =v.begin();itr!=v.end();itr++){
        printf("\n%d   ",*itr);
    }
    return 0;
}
