#include <bits/stdc++.h>

using namespace std;

#define x first
#define y second

struct comp{

bool operator()(const int & a,const int & b)
{
    return a<b;
}
};
struct info{
int a,b;
bool operator <(info c) const
{
    return a>c.a;
}
};

int main()
{
    priority_queue<int,vector<int>,comp >pq;
    priority_queue<info>pq2;

    pq2.push({1}); // i know here is an error
    pq2.push({2});

    while(!pq2.empty()){
       info v = pq2.top();
        pq2.pop();
        cout<<v.a<<endl;

    }
    return 0;
}
