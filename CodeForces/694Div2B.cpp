#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,x;
    cin>>n>>x;
    long long sum=0;
    long long k;
    vector<long long>v;
    long long sum2=0;
    for (long long i = 0; i < n; i++)
    {
        cin>>k;
        v.push_back(k);
        sum2 += k;
    }
    vector<long long>b;
    long long f=1;
	long long c=0;
    while(f!=0)
    {
        long long val=pow(x,c);
        for(long long i=0;i<n;i++)
        {
            if(v[i]%x==0)
            { sum2+=val*v[i];
                v[i]=v[i]/x;
            }
            else
            {
                f=0;
                break;
            }
        }
        c++;
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
