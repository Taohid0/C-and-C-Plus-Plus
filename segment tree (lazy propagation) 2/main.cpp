#include <bits/stdc++.h>

using namespace std;

int arr[1000];
struct info{
int sum = 0;
int prop =0;}tree[3000];

void initialize(int node,int b,int e)
{
    if(b==e)
    {
        tree[node].sum = arr[e];
        return;
    }
    int left = node*2;
    int right =left+1;
    int mid = (b+e)/2;
    initialize(left,b,mid);
    initialize(right,mid+1,e);
    tree[node].sum = tree[left].sum+tree[right].sum;
}
void update(int node,int b,int e,int i,int j,int value)
{
    if(b>j or e<i)return;
    if(b>=i and e<=j){
        tree[node].sum+=(e-b+1)*value;
        tree[node].prop+=value;
        return;
    }
    int left = node*2;
    int right = left+1;
    int mid = (b+e)/2;
    update(left,b,mid,i,j,value);
    update(right,mid+1,e,i,j,value);
    tree[node].sum = tree[left].sum+tree[right].sum+(e-b+1)*value;

}
int query(int node,int b,int e,int i,int j,int carry)
{
    if(b>j or e<i)return 0;
    if(b>=i and e<=j)
    {
        return tree[node].sum+(e-b+1)*carry;
    }
    int left = node*2;
    int right = left+1;
    int mid = (b+e)/2;
    int p1 = query(left,b,mid,i,j,carry+tree[node].prop);
    int p2 = query(right,mid+1,e,i,j,carry+tree[node].prop);
    return p1+p2;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
