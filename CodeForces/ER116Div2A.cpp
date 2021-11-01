#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    string s;
    cin>>s;
    int count = 0;
    vector<int>arr,arr2;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i] == 'a' && s[i+1] == 'b')
        {
            count++;
            arr.push_back(i);
        }
        if(s[i] == 'b' && s[i+1] == 'a')
        {
            count--;
            arr2.push_back(i);
        }
    }     
    if(count == 0)
        cout<<s<<endl;
    else if(count==1)
    {
        s[s.size()-1] = 'a';
        cout<<s<<endl; 
    }
    else
    {
        s[s.size()-1] = 'b';
        cout<<s<<endl;
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