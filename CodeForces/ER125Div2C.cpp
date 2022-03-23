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
    stack<char>st;
    char start = s[0];
    st.push(s[0]);
    int ans = 0;
    int last = -1;
    for(int i=1;i<n;i++)
    {
        if(s[i] == start)
        {
            ans++;
            last = i;
            while(!st.empty())
            {
                st.pop();
            }
            start = '-';
            continue;

        }
        if(st.empty())
        {
            start = s[i];
            st.push(s[i]);
            continue;
        }
        else
        {
            if(st.top() != s[i] && s[i] == ')')
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }

            if(st.empty())
            {
                ans++;
                last = i;
                start = '-';
                continue;
            }
        }
    }
    cout<<ans<<' '<<n - last - 1<<endl; 

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