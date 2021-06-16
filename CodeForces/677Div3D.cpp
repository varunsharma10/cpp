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
    int arr[n];
    int check[n];
    memset(check,0,sizeof(check));
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }      
    bool ok =false;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1])
        {   
            ok= true;
            break;
        }
    }
    if(!ok)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j] ){
                continue;
            }
            else
            {   
                if(check[i]==true && check[j]==true)
                {
                    continue;
                }
                else
                {
                    cout<<i+1<<" "<<j+1<<endl;
                    check[i]=true;
                    check[j]=true;
                }
                
                
            }
            
        }
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