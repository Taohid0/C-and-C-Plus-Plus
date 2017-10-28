#include <bits/stdc++.h>


using namespace std;

int main()
{
    unordered_set<int>s1,s2;
    s1.insert(5);
    s2.insert(10);

    s1.swap(s2);
   for( unordered_set<int>::iterator it = s1.begin();it!=s1.end();it++){

           cout<<*it<<" " ;
    }

    return 0;
}
