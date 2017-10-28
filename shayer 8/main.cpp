#include<iostream>
using namespace std;

int find(int a[],int key,int ele)
{
    for(int i=0;i<ele;i++)
    {
        if(a[i]==key) return i;
    }
}
//inserting items
int insert(int a[],int size,int ele,int key)
{
    if(ele>=size) return ele;
    a[ele]=key;
    return (ele+1);
}
//deleting items
int deleted(int a[],int key,int ele)
{
    int pos = find(a,key,ele);
    if(pos==-1) cout<<"element not found"<<endl;
    for(int i=pos;i<ele;i++)
    {
        a[i]=a[i+1];
    }
    return ele-1;
}
//driver code
int main()
{
    int choose;
    int a[20]={1,2,3,4,5,6,7};
    int size = sizeof(a)/sizeof(a[0]);
    int key;
    int ele;
    for(int i=0;i<size;i++)
        if(a[i]==0){
            ele=i;
            break;
        }
        cout<<ele<<endl;
    cout<<"before"<<endl;
            for(int i=0;i<ele;i++)
        cout<<" "<<a[i];
        cout<<endl;
    cin>>choose;
    if(choose==1){
        while(1){
        cout<<"insert: ";
        cin>>key;
    ele=insert(a,size,ele,key);
    for(int i=0;i<ele;i++)
        cout<<" "<<a[i];
    cout<<endl;
    }
    }

    if(choose==2)
    {
        while(1){
        cout<<"delete: ";
        cin>>key;
        ele=deleted(a,key,ele);
        for(int i=0;i<ele;i++)
            cout<<" "<<a[i];
        cout<<endl;
    }
    }

}
