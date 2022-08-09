#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int a[5] = {600, 60, 0, 10, 1};
int good[16] = {0, 70, 140, 210, 280, 350, 601, 671, 741, 811, 881, 951, 1202, 1272, 1342, 1412};
void solve()
{    
    string s;
    cin>>s;
    int x;
    cin>>x;

    int minn = 0;
    for(int i=0;i<5;i++)
    {
        minn += (s[i] - '0')*a[i];
    }
    set<int>t;
    for (int i = 0; i < 2022; i++) 
    {
		t.insert(minn);
		minn += x;
		minn %= 1440;
	}
    int count = 0;
    for(auto it : t)
    {
        for(int i=0;i<16;i++)
        {
            if(it == good[i])
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
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