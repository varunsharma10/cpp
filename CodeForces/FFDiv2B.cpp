#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
       
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    string s;
    cin>>s;
    int k;
    cin>>k;
    vector<int>v;
    for(int i=0;i<26;i++)
    {   
        int x;
        cin>>x;
        v.push_back(x);
    }
    int max=0;
    for(int i=0;i<26;i++)
    {
        if(v[i]>max)
        {
            max=v[i];
        }
    }
    int n=s.size();
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans+((i+1)*v[(int)s[i]-97]);
       
    }

    for(int i=n+1;i<=k+n;i++)
    {
        ans=ans+(i*max);
    }
    cout<<ans<<endl;
}