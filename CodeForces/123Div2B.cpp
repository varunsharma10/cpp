#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int n, m;
 
int ak1, ak2;
vector<int> res;
 
int main () {
	cin >> n >> m;
	while (res.size() < n) {
		if (m%2) {
			res.push_back((m+1)/2);
			ak1 = (m+1)/2-1;
			ak2 = (m+1)/2+1;
		}
		else {
			res.push_back(m/2);
			res.push_back(m/2+1);
			ak1 = (m/2)-1;
			ak2 = (m/2)+2;
		}
		while (ak1 > 0) {
			res.push_back(ak1);
			res.push_back(ak2);
			ak1--;
			ak2++;
		}
	}
	for (int i=0; i<n; i++)
		cout << res[i] << endl;
}