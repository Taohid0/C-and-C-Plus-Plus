#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long process_size,main_memory_size,unit_size,logical_address,physical_address=-1,number_of_pages,number_of_frames;
    long long page_table[1000];

    cout<<"Process size : ";
    cin>>process_size;

    cout<<"Main memory size : ";
    cin>>main_memory_size;

    cout<<"Per unit size : ";
    cin>>unit_size;

    cout<<"Logical address : ";
    cin>>logical_address;

    number_of_pages = process_size/unit_size;
    number_of_frames = main_memory_size/unit_size;

    cout<<"Number of pages = "<<number_of_pages<<endl;
    cout<<"Number of frames = "<<number_of_frames<<endl;


    long long page = logical_address/unit_size;
    long long remainder = logical_address%unit_size;


    cout<<"Enter the page table "<<endl;

    for(int i = 0;i<number_of_frames;i++)
    {
            cout<<"Frame number for page "<<i<<" : ";
        cin>>page_table[i];
        if(i==page)
        {
            physical_address = page_table[i]*unit_size+remainder;
        }
    }
    cout<<"Page table"<<endl;
    cout<<"Page number\tFrame Number"<<endl;

    for(int i = 0;i<number_of_pages;i++)
    {
          cout<<i<<"\t"<<page_table[i]<<endl;
    }
    long long frame=-1;

    for(int i = 0;i<number_of_pages;i++)
    {
        if (i==page)
        {
            frame = page_table[i];
        }
    }
    cout<<"Physical Address = "<<physical_address<<endl;
    cout<<"Frame number = "<<frame<<endl<<endl;

    cout<<"Process block"<<endl;

    for(int i = 0;i<number_of_pages;i++)
    {
        if(i==page)
        {
            cout<<"******************"<<endl;
            cout<<"\t"<<i<<endl;
            cout<<"XXXXXXXXXXXXXXXXXX"<<endl;
            cout<<"******************"<<endl<<endl;
        }
        else
        {
            cout<<"******************"<<endl;
            cout<<"\t"<<i<<endl;
            cout<<"******************"<<endl<<endl;
        }
    }
    cout<<endl<<endl;
    cout<<"Main memory Block"<<endl;

    for(int i =0;i<number_of_frames;i++)
    {
         if(i==frame)
        {
            cout<<"******************"<<endl;
            cout<<"\t"<<i<<endl;
            cout<<"XXXXXXXXXXXXXXXXXX"<<endl;
            cout<<"******************"<<endl<<endl;
        }
        else
        {
            cout<<"******************"<<endl;
            cout<<"\t"<<i<<endl;
            cout<<"******************"<<endl<<endl;
        }
    }







    return 0;
}
