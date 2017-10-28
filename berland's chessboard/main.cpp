#include <bits/stdc++.h>

using namespace std;

string s[10];
int main(){
    int i,j,cnt=0,t,x=0;
    for(i=0;i<8;i++){
		cin>>s[i];
		t=0;
		for(j=0;j<8;j++)
			if(s[i][j]=='B')t++;
		if(t==8)cnt++;
		else x=t;
	}
	cnt+=x;
    printf("%d\n",cnt);
    return 0;
}
