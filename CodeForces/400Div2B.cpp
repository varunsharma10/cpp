#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int s[100005];
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll n;
    cin>>n;
    for(int i=2; i<=n+1;i++)
    {
        if(!s[i])
        {
            for(int j=2*i; j<=n+1; j+=i)
            s[j]=1;
        }
    }
    if(n>2)
    {
        cout<<"2"<<endl;
    }
    else
    {
        cout<<"1"<<endl;
    }
    for(int i=2;i<=n+1;i++)
    {
        if(!s[i])
        {
            cout<<"1"<<" ";
        }
        else
        {
            cout<<"2"<<" ";
        }
        
    }
    cout<<endl;
    
}