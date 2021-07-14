#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int k,n,m;
    cin>>k>>n>>m;
    int a[n];
    int b[m];
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }       
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    bool ok = true;
    int tmp = k;
    int curr;
    int i=0,j=0;
    while(i<n && j<m)
    {   
        curr = -1;
        if(a[i] == 0)
        {
            ans.push_back(a[i]);
            i++;
            tmp++;
            continue;
        }
        else if(b[j] == 0)
        {
            ans.push_back(b[j]);
            j++;
            tmp++;
            continue;
        }
        else if(a[i] < b[j])
        {
            curr = a[i];
            i++;
        }
        else
        {
            curr = b[j];
            j++;
        }

        if(curr<=tmp)
        {
            ans.push_back(curr);
        }
        else
        {
            ok = false;
            break;
        }
    }
    if(ok == false){
        cout<<-1<<endl;
        return;
    }
    while(i<n)
    {
        if(a[i] == 0)
        {
            tmp++;
            ans.push_back(0);
        }
        else if(a[i] <= tmp)
        {
            ans.push_back(a[i]);
        }
        else
        {
            ok = false;
            break;
        }
        i++;
    }
    while(j<m)
    {
        if(b[j] == 0)
        {
            tmp++;
        }
        else if(b[j] <= tmp)
        {
            ans.push_back(b[j]);
        }
        else
        {
            ok = false;
            break;
        }
        j++;
    }
     if(ok == false){
        cout<<-1<<endl;
        return;
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
   
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