#include <bits/stdc++.h>

using namespace std;

void print_page(queue<string>q)
{
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main()
{
    queue<string>page;
    int n,counter =1;
    string name;

    cout<<"Enter number of pages in the memory"<<endl;
    cin>>n;

    cout<<"enter page numbers "<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>name;
        page.push(name);
    }

    cout<<"current pages in the memory "<<endl;
    print_page(page);

    cout<<"Number of new pages to be enter "<<endl;
    cin>>n;
    while(n--)
    {
        cin>>name;
        page.push(name);
        page.pop();
        cout<<"Pages in memory after new page insertion "<<counter++<<endl;
        print_page(page);
        cout<<endl;
    }

    return 0;
}
