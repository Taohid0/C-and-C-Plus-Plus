#include <iostream>
#include <algorithm>
#include <cmath>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int n, q, sqn;
struct que{
	int l, r;
	int ind;
};
que Q[200002];
int ans[200002];

int A[30002], cont[1000002];
int L, R, answer;

bool f( que A, que B ){
	if( A.l / sqn < B.l / sqn )
		return true;
	if( A.l / sqn > B.l / sqn )
		return false;
	return A.r < B.r ;
}

void remove( int i ){
	cont[ A[i] ]--;
	if( cont[ A[i] ] == 0 )
		answer--;
		if(cont[i]<0)cont[i]=0;
}

void add( int i  ){
	cont[ A[i] ]++;
	if( cont[ A[i] ] == 1 )
		answer++;
}

int query( int i ){

	while( L < Q[i].l ){
		remove( L );
		L++;
	}
	while( L > Q[i].l ){
		L--;
		add( L );
	}
	while( R < Q[i].r ){
		R++;
		add( R );
	}
	while( R > Q[i].r ){
		remove( R );
		R--;
	}
	return answer;

}

int main(){

	optimizar_io

	cin >> n;
	sqn = sqrt( n );
	for( int i = 1; i <= n; i++ )
		cin >> A[i];

	cin >> q;
	for( int i = 1; i <= q; i++ ){
		cin >> Q[i].l >> Q[i].r;
		Q[i].ind = i;
	}
	sort( Q + 1, Q + q + 1, f );


	for( int i = 1; i <= q; i++ )
		ans[ Q[i].ind ] = query( i );
	for( int i = 1; i <= q; i++ )
		cout << ans[i] << "\n";

	return 0;

}
