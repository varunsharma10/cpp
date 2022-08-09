#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
ll arr[5000000];
int m,a=1;
vector<int>v;
priority_queue<pair<int,int>>q;
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t;
    cin>>t;
            
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            int x;
            ++m;
            cin>>x;
            q.push(make_pair(x,-m));
        }
        else if(n==2)
        {
            while(arr[a])
            {
                a++;
            }
            arr[a]=1;
            cout<<a<<" ";
        }
        else if(n==3)
        {
            while(arr[-q.top().second])
            q.pop();
            arr[-q.top().second] = 1;
            cout<<-q.top().second<<" ";
            q.pop();
        }
    }
    cout<<endl;
}