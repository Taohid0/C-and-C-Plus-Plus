#include <bits/stdc++.h>

using namespace std;
long int tree[100001*3];
long int total=0;
void update(int node,int i,int j,int pos)
{
    if(i==j)
    {
        if(tree[node]==0)total++;
        tree[node]=1;
    }
    if(i>pos or j<pos)return;
    int left = node*2;
    int right = left+1;
    int mid = (i+j)/2;
    update(left,i,mid,pos);
    update(right,mid+1,j,pos);
    tree[node] = tree[left]+tree[right];
}

void del(int node,int b,int e,int i)
{
    if(b==e)
    {
        if(tree[node]==1)total--;
        tree[node]=0;
    }
    if(i<b or e<i)return;
    int left = node*2;
    int right = left+1;
    int mid = (b+e)/2;
    update(left,b,mid,i);
    update(right,mid+1,e,i);
    tree[node]=  tree[left]+tree[right];
}

long int kth(int node,int b,int e,int k)
{
    if(b==e)
    {
        return b;
    }
    if(k<b or k>e)return 0;
    int left = node*2;
    int right = left+1;
    int mid = (b+e)/2;
    if(k+1<left)
        return kth(left,b,mid,k);
    else
        return kth(right,mid+1,right,left-k);
}

int main()
{
    long int query,value,counter=1,arr[100005];

    map<long int,long int>mp;
    string command;
    vector<pair<string,long int> >vp;
    cin>>query;
    for(int i = 0;i<query;i++)
    {
        cin>>command>>value;
        if(command=="I")
        {
            if(mp[value]==0)
            {
                mp[value]=counter++;
            }
            arr[mp[value]]=value;
            vp.push_back(make_pair(command,value));
        }
    }
    sort(v.begin(),v.end());

    for(int i=0;i<query;i++)
    {
        if(vp[i].first=="I")update(1,1,counter,mp[vp[i].second]);
        else if(vp[i].first=="D")del(1,1,counter,mp[vp[i].second])
        else if(vp[i].first=="K")
        {
            if(total<mp[vp[i].second])cout<<"Invalid"<<endl;
            else
                cout<<kth(1,1,n,vp[i].second);

        }
        else
            cout<<total-kth(1,1,n,vp[i].second)<<endl;
    }


    return 0;
}
