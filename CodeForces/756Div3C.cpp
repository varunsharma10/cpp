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
    deque<int>q1,q2;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        q1.push_back(arr[i]);
    }       
    int first = -1;
    int a = q1.front();
    int b = q1.back();
    if(max(a,b) == a)
        q1.pop_front();
    else
        q1.pop_back();
    
    q2.push_back(max(a,b));
    first = max(a,b);
    while(!q1.empty())
    {
        if(q1.size() == 1)
        {
            int a = q1.back();
            q1.pop_back();
            q2.push_front(a);
        }
        else
        {
            int a = q1.back();
            int b = q1.front();
            int tmp = max(a,b);
            if(tmp > first)
            {
                cout<<-1<<endl;
                return;
            }
            else
            {
                if(min(a,b) == a)
                {
                    q1.pop_back();
                    q2.push_back(a);
                }
                else
                {
                    q1.pop_front();
                    q2.push_front(b);
                }
            }
        }
    }
    while(!q2.empty())
    {
        int tmp = q2.front();
        q2.pop_front();
        cout<<tmp<<" ";
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