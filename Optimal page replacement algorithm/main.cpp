#include <bits/stdc++.h>

using namespace std;

struct info{
string page_name;
int instructions;

bool operator< (info p)const
{
    return instructions<p.instructions;
}
}page[1000];

void print_queue(priority_queue<info>pq)
{

    while(!pq.empty())
    {
        info element =pq.top();
        pq.pop();
        cout<<element.page_name<<" "<<element.instructions<<endl;
    }
    cout<<endl;
}

int main()
{
    priority_queue<info>pq,temp;
    info new_page;
    int counter = 1;
    int n;
    cout<<"Enter number of pages in the memory ";
    cin>>n;

    cout<<"Enter page numbers and instructions "<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>new_page.page_name>>new_page.instructions;
        pq.push(new_page);
    }

    temp = pq;

    cout<<"Current pages in the memory "<<endl<<endl;
    print_queue(temp);

    cout<<"Enter number of new pages to be enter"<<endl;
    cin>>n;

    while(n--)
    {
        cin>>new_page.page_name>>new_page.instructions;
        pq.pop();
        pq.push(new_page);
        temp=  pq;
        cout<<"Pages in the memory after entering new page "<<counter++<<endl;
        print_queue(temp);
        cout<<endl;

    }

    return 0;
}
