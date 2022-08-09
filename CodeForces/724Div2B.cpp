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
    string s;
    cin>>s;
    for(int i=1;i<4;i++)
    {
        int num =1;
        for(int j=0;j<i;j++)
        {
            num*=26;
        }
        for(int k=0;k<num;k++)
        {
            string t;
            int tmp = k;
            for(int p = 0;p<i;p++)
            {
                int d = tmp%26;
                t.push_back('a'+d);
                tmp/=26;
            }
            reverse(t.begin(),t.end());
            if(s.find(t)== -1)
            {
                cout<<t<<endl;
                return;
            }
        }
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