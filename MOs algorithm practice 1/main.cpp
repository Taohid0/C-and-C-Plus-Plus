#include <bits/stdc++.h>

using namespace std;
int N,Q;

long long current_answer;
long long cnt[100];
long long answer[100];
int BLOCK_SIZE;
int arr[10000];
bool cmp(const pair<pair<int,int> ,int>  &x, const pair<pair<int,int>,int>  &y)
{
    int block_x = x.first.first/BLOCK_SIZE;
    int block_y = y.first.first/BLOCK_SIZE;

    if(block_x==block_y)
    {
        return x.first.second<y.first.second;
    }
    return block_x<block_y;
}
void add(int x)
{
//    current_answer-=cnt[x]*cnt[x]*x;
//    cnt[x]++;
//    current_answer+=cnt[x]*cnt[x]*x;
 if(cnt[x]==0)
//    {
//        cnt[x]=1;
//        current_answer++;
//    }  if(cnt[x]==1)
    {
        cnt[x]=0;
        current_answer--;
    }
}
void rmv(int x)
{
    current_answer-=cnt[x]*cnt[x]*x;
    cnt[x]--;
    current_answer+=cnt[x]*cnt[x]*x;
}
int main()
{

    cin.sync_with_stdio(false);
    pair<pair<int,int>,int> queries[100];
    cin>>N;
    BLOCK_SIZE = sqrt(N);

    for(int i = 0;i<N;i++)
    {
        cin>>arr[i];
    }
    cin>>Q;
    for(int i=0;i<Q;i++)
    {
        cin>>queries[i].first.first>>queries[i].first.second;
        queries[i].second=i;
    }
    sort(queries,queries+Q,cmp);
    int mo_left=0,mo_right=-1;
    for(int i = 0;i<Q;i++)
    {
        int left = queries[i].first.first;
        int right= queries[i].first.second;

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
        answer[queries[i].second]=current_answer;
    }
    for(int i=0;i<Q;i++)
    {
        cout<<answer[i]<<endl;
    }

    return 0;
}
