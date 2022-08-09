#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int N,M,A[2223];
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    cin >> N >> M ;
	for ( int i = 0 ; i < N ; i ++ )
		cin >> A[i] ;
	int Ret = M ;
	for ( int i = 0 ; i < N ; i ++ )
	for ( int j = i + 1 ; j < N ; j ++ )
		Ret = max( Ret , M / A[i] * A[j] + M % A[i] ) ;
	cout << Ret << endl ;
	return 0 ;
}