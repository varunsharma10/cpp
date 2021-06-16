#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n;
    cin>>n;
    vector<int>mtaken(n),ftaken(n);
    for(int i=0;i<n;i++)
    {   
        int k;
        cin>>k;
        while(k--)
        {
            int j;
            cin>>j;
            j--;
            if(!mtaken[i] && !ftaken[j])
            {
                mtaken[i]=true;
                ftaken[j]=true;
            }
        }
        
    }       
    int a = int(find(mtaken.begin(), mtaken.end(), false) - mtaken.begin());
	int b = int(find(ftaken.begin(), ftaken.end(), false) - ftaken.begin());
		if (a == n) {
			cout << "OPTIMAL" << '\n';
		} else {
			cout << "IMPROVE" << '\n';
			cout << a+1 << ' ' << b+1 << '\n';
		}
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}