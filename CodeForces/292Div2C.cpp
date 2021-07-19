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
    string arr[10];
    for(int i=0;i<=9;i++)
    {
        if(i==0 || i==1)
        {
            arr[i] = "0";
        }
        else if(i==2)
        {
            arr[i]="2";
        }
        else if(i==3)
        {
            arr[i] = "3";
        }
        else if(i == 4)
        arr[i] = "322";
        else if(i == 5)
        arr[i] = "5";
        else if(i == 6)
        arr[i] = "53";
        else if(i == 7)
        arr[i] = "7";
        else if(i == 8)
        arr[i] = "7222";
        else if(i == 9)
        arr[i] = "7332";
    }   
    string ans; 
    for(auto c:s)
    {
        ans+=(arr[c-'0']);
    }
    sort(ans.begin(),ans.end(),greater<int>());
    for(auto i : ans)
    {   
        if(i=='0')
        {
            continue;
        }
        cout<<i;
    }
    cout<<endl;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}