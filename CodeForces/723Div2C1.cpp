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
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll sum=0;
    ll ans=0;
    priority_queue<int , vector<int> , greater<int>>p;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum<0)
        {
            sum-=arr[i];
            if(p.empty())
            {
                continue;
            }
            else
            {
                int num = p.top();

                if(num < arr[i])
                {
                    sum-=num;
                    sum+=arr[i];
                    p.pop();
                    p.push(arr[i]);
                }

            }
            
        }
        else
        {
            ans++;
            if(arr[i]<0){
                p.push(arr[i]);
            }
        }
        
    }
    cout<<ans<<endl;
}