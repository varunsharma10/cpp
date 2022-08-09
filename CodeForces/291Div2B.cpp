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
    int n;
    double x0,y0;
    cin>>n>>x0>>y0;
    pair<int,int>p[n];
    vector<double>v;
    for(int i=0;i<n;i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    for(int i=0;i<n;i++)
    {   
        if(p[i].first-x0==0)
        {
            v.push_back(INT_MAX);
        }
        else
        v.push_back((p[i].second-y0)/(p[i].first-x0));
    }
    
    getunique(v);
    cout<<v.size()<<endl;
   

}