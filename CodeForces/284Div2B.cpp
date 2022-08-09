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
    int n,m;
    map<string ,string>mp;
    cin>>n>>m;
    string a,b;
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        mp[a]=b;
    }
    for(int i=0;i<n;i++)
    {
        string word;
        cin>>word;
        if(mp[word].length()>=word.length())
        {
            cout<<word<<" ";
        }
        else
        {
            cout<<mp[word]<<" ";
        }
        
    }
}