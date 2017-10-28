#include <bits/stdc++.h>


int main()
{
    std::vector <int> v(10);
    int i = 0;
    while(i<9){
        scanf("%d",&v[i]);
        i++;
    }
    std::sort(v.begin(),v.end());

    for(int i = 0;i<(int)v.size();i++)
    {
        printf("%d  ",v[i]);
    }

    return 0;
}
