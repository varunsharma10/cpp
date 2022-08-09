#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n,m;
    cin>>n>>m;
    vector<int>ans;
    priority_queue<int,vector<int> , greater<int> > q;
    int dis = 0;
    if((n % 2 != 0 && m%2 == 0) || (n%2 == 0 && m % 2 !=0))
    {
        int j = 2;
        int count = 0;
        for(int i=0;i<=n*m-1;i++)
        {
            ans.push_back(dis);
            count++;
            if(count == j)
            {
                dis++;
                count = 0;
                j+=4;
            }
        }
    }
    else if(n%2 == 0 && m % 2 == 0)
    {
        int j = 4;
        int count = 0;
        for(int i=0;i<=n*m-1;i++)
        {
            if(i == 0)
            {
                ans.push_back(dis);
                continue;
            }
            ans.push_back(dis);
            count++;
            if(count == j)
            {
                dis++;
                count = 0;
                j+=4;
            }
        }
    }
    else
    {
        int j = 4;
        int count = 0;
        for(int i=0;i<=n*m-1;i++)
        {
            if(i == 0)
            {
                ans.push_back(dis);
                dis++;
                continue;
            }
            ans.push_back(dis);
            count++;
            if(count == j)
            {
                dis++;
                count = 0;
                j+=4;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int a = max(i , n-i-1);
            int b = max(j , m-j-1);
            int tmp = a + b;
            q.push(tmp);
        }
    }
    while(!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
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