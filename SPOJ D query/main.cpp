#include <bits/stdc++.h>

using namespace std;
//here is an error in this code
int current_answer,cnt[1000006],arr[1000006];
int BLOCK_SIZE;
bool cmp(const pair<pair<int,int>,int> &x,const pair<pair<int,int>,int> &y)
{
    int block_x = x.first.first/BLOCK_SIZE;
    int block_y = y.first.first/BLOCK_SIZE;
    if(block_x==block_y)
        return x.first.second<y.first.second;
    return block_x<block_y;
}
void add(int x)
{
        cnt[x]++;
        if(cnt[x]==1)
            current_answer++;

}
void rmv(int x)
{
    cnt[x]--;
    if(cnt[x]==0)
        current_answer--;
    if(cnt[x]<0)cnt[x]=0;
}
pair<pair<int,int>,int> queries[200005];

int main()
{int answer[200006];
    cin.sync_with_stdio(false);

    int N,Q;

    cin>>N;
    BLOCK_SIZE = sqrt(N);
    for(int i=1;i<=N;i++)
    {
        cin>>arr[i];
    }
    cin>>Q;
    for(int i = 0;i<Q;i++)
    {
        scanf("%d%d",&queries[i].first.first,&queries[i].first.second);
        queries[i].second = i;
    }
    sort(queries,queries+Q,cmp);

    int mo_left = 0,mo_right = 0;
    for(int i = 0;i<Q;i++)
    {
        int left= queries[i].first.first;
        int right = queries[i].first.second;
        while(mo_right<right)
        {
            mo_right++;

            add(arr[mo_right]);

        }
        while(mo_right>right)
        {

            rmv(arr[mo_right]);
            mo_right--;
        }
        while(mo_left<left)
        {
            rmv(arr[mo_left]);
            mo_left++;
        }
        while(mo_left>left)
        {
            mo_left--;
            add(arr[mo_left]);

        }
        answer[queries[i].second] = current_answer;
    }
    for(int i = 0;i<Q;i++)
    {
        printf("%d\n",answer[i]);
    }
    return 0;
}
