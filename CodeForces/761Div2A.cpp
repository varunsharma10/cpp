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
    int n = s.size();
    string tmp = s;
    string s1;
    cin>>s1;
    sort(s.begin(),s.end());
    map<char,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    if(s1!="abc") 
    {
        cout<<s<<"\n";
        return;
    }
    else
    {
        if(s[0]!='a') 
        {
            cout<<s<<"\n";
            return;
        }
        else
        {
            int i=0,count2=0;
            while(i < n-1)
            {
                if(s[i]=='b') 
                    break;
                i++;
            }
            for(count2=i;count2<n-1;count2++) 
            {
                if(s[count2]=='c') 
                    break;
            }
            while(count2<n && s[count2]=='c') 
            {
                swap(s[i],s[count2]);
                i++;count2++;
            }
        }
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