#include<bits/stdc++.h>
using namespace std;


set<pair<int,int> > graph;
map<pair<int,int>, int> mp;

int dirx[8] = {1, 0, -1, 1, -1, 1, 0, -1};
int	diry[8] = {1, 1, 1, 0, 0, -1, -1, -1};

int main() {
    int n,r,a,b;
	pair<int,int> strt,des;

	cin>>strt.first>>strt.second>>des.first>>des.second;
	graph.insert(strt);
	graph.insert(des);

	cin>>n;

	for (int i = 0; i < n; i++) {
		 cin>>r>>a>>b;
        for (int j = a; j <= b; j++)
            graph.insert(make_pair(r, j));
	}

	for (auto iter = graph.begin(); iter != graph.end(); iter++){
        mp[*iter] = -1;
    }

	mp[strt] = 0;

	queue<pair<int,int> > q;

	q.push(strt);
	mp[strt] = 0;
	while (!q.empty()) {
		pair<int,int> u = q.front();
        q.pop();

		for (int i = 0; i < 8; i++) {
			int x = u.first + dirx[i];
			int y = u.second + diry[i];

			pair<int,int> v = make_pair(x, y);
			if (mp[v] == -1) {
				mp[v] = mp[u
				] + 1;
				q.push(v);
			}
		}
	}

       if(mp[des]==0)
        cout<<-1<<endl;
       else
        cout<<mp[des]<<endl;

	return 0;
}
