#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,x;
    cin>>n>>x;
    int sum=0;
    int k;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        cin>>k;
        v.push_back(k);
    }
    int d;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i]%x==0)
        {   
            d=x;
            while(d--)
            {
                v.push_back(v[i]/x);
            }
            
        }
        if(v[i]%x!=0)
        {
            break;
        }
    }
    int sum2=0;
    for (int i = 0; i < v.size(); i++)
    {
        sum2+=v[i];
    }
    
    cout<<sum2<<endl;
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
