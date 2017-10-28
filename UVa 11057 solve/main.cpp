#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstdlib>
using namespace std;
int main()
{
int books, price, money;
int book1, book2;
string str;
while(scanf("%d", &books) != EOF)
{
    int maxi = 100000000;
    vector<int> vec;
    for(int x=1; x<=books; x++)
    {
        scanf("%d", &price);
        vec.push_back(price);
    }
    scanf("%d", &money);
   // getline(cin,str);
    //getline(cin,str);
    sort(vec.begin(), vec.end());

    for(int x=0; x<books; x++)
    {
        for(int y=x+1; y<books; y++)
        {
            if(vec[x] + vec[y] == money && abs(vec[x] - vec[y]) < maxi)
            {
                book1 = vec[x];
                book2 = vec[y];
            }
        }
    }
    printf("Peter should buy books whose prices are %d and %d.\n\n", book1, book2);
}
return 0;
}
