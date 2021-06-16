#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int ans[31];
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    int n,sum;
    cin>>n>>sum;
    pair<int,int>p[n];
    int s1=0,s2=0;
    for(int i=0;i<n;i++)
    {
        cin>>p[i].first>>p[i].second;
        s1+=p[i].first;
        s2+=p[i].second;
    }
    if(sum<s1 || sum>s2)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        cout<<"YES"<<endl;
        sum-=s1;
        for(int i=0;i<n;i++)
        {   
            int x =p[i].second-p[i].first;
            x = min(x,sum);
            sum-=x;
            p[i].first+=x;
        }
        for (int i = 0; i < n; i++)
        {
            cout<<p[i].first<<" ";
        }
        cout<<endl;
        
    }
    
    


}