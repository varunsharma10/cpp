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
    ll n;
    cin>>n;
    ll arr[n];
    vector<int>deg(n),leaves(n);
    for(int i=1;i<n;i++)
    {
        cin>>arr[i];
        arr[i]--;
        deg[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(deg[i]==0)
        {
            leaves[arr[i]]++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(deg[i]>0 && leaves[i]<3)
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;

}