#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<cstdio>
//net code,easy
using namespace std;

int main(){
	map <string , int> csub;
	map <string , int> :: iterator it;
	string in;
	int n,t,i,c,D,check;
	cin >> t;
	getchar();
	i = 1;
	while(i<=t){
		cin >> n;
		getchar();
		while(n--){
			cin >> in >> c;
			csub[in] = c;
		}
		cin >> D;
		getchar();
		cin >> in;
		check = 0;
		it = csub.find(in);
		if((it==csub.end()) || csub[in] > D+5)
			check = 1;
		else if(csub[in] > D && csub[in] <= D+5)
			check = 2;
		if(check==0)
			cout << "Case " << i << ": Yesss" << endl;
		else if(check==2)
			cout << "Case " << i << ": Late" << endl;
		else cout << "Case " << i << ": Do your own homework!" << endl;
		i++;
		csub.clear();
	}
	return 0;
}
