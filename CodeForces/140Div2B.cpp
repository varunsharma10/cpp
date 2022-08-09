#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    map<long long,long long>mp;
    for(long long i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        mp[x] = i+1;
    }
    long long a = 0;
    long long b = 0;
    long long m;
    cin>>m;

    for(long long i=0;i<m;i++)
    {
        long long x;
        cin>>x;
        a += mp[x];
        b += n - mp[x] + 1;
    }
    cout<<a<<" "<<b<<endl;    
}
