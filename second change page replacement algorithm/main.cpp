#include <bits/stdc++.h>

using namespace std;

struct info{
string name;
int r,time;

bool operator <(info p)const
{
    return r>p.r;
}
};

void print_page(priority_queue<info>pq)
{
    while(!pq.empty())
    {
        info t = pq.top();
        pq.pop();
        cout<<t.name<< " "<<t.r<<endl;
    }

    cout<<endl;
}
int main()
{
    string name,referred_page_number;
    int n,refered_page,counter =1,time_interval;
    priority_queue<info>pq,temp,reset_queue;
    info element;

    cout<<"Enter number of pages in the memory"<<endl;
    cin>>n;

    cout<<"Enter page number and their arrival time and R bit"<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>element.name>>element.time>>element.r;
        pq.push(element);
    }
    cout<<"Current pages in memory and their R bit"<<endl;
    print_page(pq);

    cout<<"Enter time interval"<<endl;
    cin>>time_interval;

    cout<<"Enter number of page faults"<<endl;
    cin>>n;
    while(n--)
    {
        cout<<"how many pages referred in last "<<time_interval<<" ms"<<endl;
        cin>>refered_page;
        cout<<"Enter the page number which are referenced "<<endl;
        temp = reset_queue;
        while(!pq.empty())
            {
                info t = pq.top();
                pq.pop();
                t.r=0;
                temp.push(t);
            }
            pq =temp;
            temp = reset_queue;
        while(refered_page--)
        {
            cin>>referred_page_number;


            while(!pq.empty())
            {
                info t = pq.top();
                pq.pop();
                if(t.name==referred_page_number)
                    t.r=1;
                temp.push(t);
            }
            pq = temp;
        }
        info t;
        pq.pop();
        cout<<"Enter the new page number"<<endl;
        cin>>t.name;
        t.r =1;
        pq.push(t);
        cout<<"Pages in memory after insertion "<<counter++<<endl;
        print_page(pq);
    }

    return 0;
}
