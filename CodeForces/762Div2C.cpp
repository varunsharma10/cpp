#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    string a,s;
    cin>>a>>s;
   
    int j = s.size()-1;
    string ans;
    for(int i=a.size()-1;i>=0;i--)
    {
        if(j < 0)
        {
            cout<<-1<<endl;
            return;
        }
        if(a[i]-'0' <= s[j]-'0')
        {
            ans+= to_string((s[j] - '0') - (a[i]-'0'));
            j--;
        }
        else
        {
            string tmp;
            if(j-1 < 0)
            {
                cout<<-1<<endl;
                return;
            }
            tmp+=s[j-1];
            tmp+=s[j];
            j-=2;
            int k = stoi(tmp);
            ans+=  to_string(k - (a[i] - '0'));
        }
    }
    while(j < s.size())
    {
        ans+=s[j];
        j--;
    }
    reverse(ans.begin(),ans.end());
    int i = 0;
    string b;
    while(ans[i] == '0')
    {
        i++;
    }
    while(i < ans.size())
    {
        b+=ans[i];
        i++;
    }
    ans = b;
    // cout<<endl;
    // cout<<ans<<endl;
    string k = "";
    string k2 = "";
    int n1 = a.size();
    int n2 = ans.size();
    
    if(n1 > n2)
    {
        int tmp = n1 - n2;
        k = string(tmp , '0');
        k+=ans;
        ans = k;
    }       
    else if(n2 > n1)
    {
        int tmp = n2 - n1;
        k2 = string(tmp , '0');
        k2 += a;
        a = k2;
    }
    vector<string>v;
    string ans2;
    for(int i=a.size()-1;i>=0;i--)
    {   
        int k1 = a[i]-'0';
        int k2 = ans[i]-'0';
        int k3 = k1+k2;
        v.push_back(to_string(k3));
    }
    for(int i=v.size()-1;i>=0;i--)
    {
        ans2+=v[i];
    }

    
    if(ans2 == s)
        cout<<b<<endl;
    else
        cout<<-1<<endl;
    // cout<<ans2<<endl;

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