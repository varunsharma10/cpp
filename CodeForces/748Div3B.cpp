#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
ll diff(string s , string tmp)
{
    ll ans=0;
    ll res = s.size();
    while(s.size()>0 && tmp.size()>0) 
    {
        if(s.back() == tmp.back()) 
            tmp.pop_back();

        else 
            ans++;

        s.pop_back();
    }

    if(tmp.size()==0)
        return ans;

    return res;
}
void solve()
{    
    string s;
    cin >> s;
    if(s.size()<2) 
        cout<<s.size()<<endl;
    else 
    {
        string a = "00",b = "25",c = "50",d = "75";
        ll ans1 = diff(s,a) , ans2 = diff(s,b), ans3 = diff(s,c) , ans4 = diff(s,d);

        cout<<min({ans1,ans2,ans3,ans4})<<endl;
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