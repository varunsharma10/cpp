#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    string s;
    cin>>s;
    int mod = (int)1e6 + 3;
    int ans=0;
    for(int i=0;i<s.size();i++){
        ans=ans*16%mod;
        if (s[i] == '>')
 			ans = (ans + 8) % mod;
 		
 		else if (s[i] == '<')
 			ans = (ans + 9) % mod;
 		
 		else if (s[i] == '+')
 			ans = (ans + 10) % mod;
 
		else if (s[i] == '-')
 			ans = (ans + 11) % mod;
 		else if (s[i] == '.')
 			ans = (ans + 12) % mod;
 
		else if (s[i] == ',')
 			ans = (ans + 13) % mod;
 		
		else if (s[i] == '[')
 			ans = (ans + 14) % mod;
 
		else if (s[i] == ']')
 			ans = (ans + 15) % mod;
    }
    cout<<ans<<endl;
}