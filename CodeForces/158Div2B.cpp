#include <bits/stdc++.h>
using namespace std;
int n, d[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, mx;
string s;
map <string, int> mp;
 
inline bool ok (string s){
 	for (int i = 0; i < 10; i ++)
		if ((s[i] == '-') ^ (i == 2 || i == 5))
        return 0;
 
	int dd = (s[0]-'0')*10 + (s[1]-'0');
	int mm = (s[3]-'0')*10 + (s[4]-'0');
	int yy = (s[6]-'0')*1000 + (s[7]-'0')*100 + (s[8]-'0')*10 + (s[9]-'0');
	
	if (yy < 2013 || yy > 2015) return 0;
	if (mm < 1 || mm > 12) return 0;
	if (dd < 1 || dd > d[mm-1]) return 0;
	return 1;
}
 
int main(){
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> s; n = s.size();
	for (int i = 0; i+10 <= n; i ++){
		string t = s.substr(i, 10);
	  	if (ok(t)) mp[t]++, mx = max(mx, mp[t]);
	}
	for (int i = 0; i+10 <= n; i ++){
		string t = s.substr(i, 10);
		if (mp[t] == mx) return cout << t << '\n', 0;
	}
}