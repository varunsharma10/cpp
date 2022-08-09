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
    int a=0;
    int b=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        a++;
        else
        b++;
    }   
    int x =a%2;
    int y= b%2;    
    if(x != y)
    {
        cout<<"NO"<<endl;
        return;
    }
    else
    {   
        if(a%2==0)
        {
            cout<<"YES"<<endl;
            return;
        }
        else
        {
            for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]%2 != arr[j]%2 && abs(arr[j]-arr[i])==1)
                {
                    cout<<"YES"<<endl;
                    return;
                }
            }

            
        }
        cout<<"NO"<<endl;
        
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