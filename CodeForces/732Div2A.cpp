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
    int arr[n];
    int b[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }       
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        sum-=b[i];
    }
    if(sum!=0)
    {
        cout<<-1<<endl;
        return;
    }
    vector<int>inc;
    vector<int>dec;
    for(int i=0;i<n;i++)
    {
        if(arr[i] > b[i])
        {
            while(arr[i] != b[i])
            {
                arr[i]--;
                inc.push_back(i+1);
            }
        }
        if(arr[i] < b[i])
        {
            while(arr[i] != b[i])
            {
                arr[i]++;
                dec.push_back(i+1);
            }
        }
    }
    cout<<inc.size()<<endl;
    for(int i=0;i<inc.size();i++)
    {
        cout<<inc[i]<<" "<<dec[i];
        cout<<endl;
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