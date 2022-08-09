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
    int n;
    cin>>n;
    vector<int>v;
    for(int i=2;i<=n;i++){
        while(n % i==0)
        {
            n/=i;
            v.push_back(i);
        }
    }
    vector<int>ans;
    ans.push_back(1);
    for(int i=0;i<v.size();i++){
        ans.push_back(ans.back()*v[i]);
    }
    sort(ans.rbegin(),ans.rend());
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}