#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
ll ans;
ll n;
int lucky(long long x)
{
    int num = 0;
    int u[10];
    int i;
    for (i = 0; i < 10; i++)
        u[i] = 0;
    while (x)
    {
        if (u[x % 10] == 0)
            num++;
 
        u[x % 10]++;
        x /= 10;
    }
    return num <= 2;
}
void dfs(int num)
{
    if(num>0 && num<=n) ans++;
    if(num >=1e9)return;
    for(int i=0;i<10;i++)
    {
        if(num*10+i > 0)
        {
            if(lucky(num*10+i))
            {
                dfs(num*10+i);
            }
        }
    }
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    cin>>n;
    dfs(0);
    cout<<ans<<endl;
}
