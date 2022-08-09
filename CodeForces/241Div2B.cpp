#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    int m; cin >> m;
	int n; cin >> n;
	
	int paintingTime[m][n];
	for (int i = 0 ; i < m ; i++) {
		for (int j = 0 ; j < n ; j++) 
            cin >> paintingTime[i][j];
	}
	
	vector<int> finishTime(m);
 
	for (int i = 0 ; i < n ; i++) {
		int freeAt = 0;
		for (int j = 0 ; j < m ; j++) {
			int start = max(freeAt, finishTime[j]);
			finishTime[j] = start + paintingTime[j][i];
			freeAt = finishTime[j];
		}
       
	}
	
	for (auto x : finishTime) cout << x << ' ';
}