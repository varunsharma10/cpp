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
    int n;
    cin>>n;
    string s="abcd";
    string ans;
    int x=n/4;
    for(int i=0;i<x;i++){
        ans+=s;
    }
    if(n%4==0)
    {
        cout<<ans<<endl;
    }
    else
    {
        int k=n%4;
        for(int i=0;i<k;i++)
        {  
            ans+=s[i];
        }
        cout<<ans<<endl;
    }
    
}