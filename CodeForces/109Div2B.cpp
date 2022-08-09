#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
bool cmp(pair<int,int> a,pair<int,int> b)
{
    return (a.second>b.second) || (a.second==b.second && a.first>b.first);
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    bool ok =false;
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
        if(v[i].second!=0)
        {
            ok=true;
        }
    }
    int counter=1;
    int points=0;
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++)
        {   
            if(counter>0)
            {
                counter--; 
                counter+=v[i].second;
                points+=v[i].first;
            }
        }
    cout<<points<<endl;


}