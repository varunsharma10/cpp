#include<bits/stdc++.h>
using namespace std;
#define ll long long int

const int mod  = 1e9+7;
ll cricket[100005];
ll football[100005];
ll hockey[100005];

ll n;

int main()
{
    cin>>n;
    cricket[1] = 1;
    football[1] = 1;
    hockey[1] = 1;
    hockey[2] = 2;

    for(int i=1;i<=n;i++)
    {
        if(i-1 > 0)
        {
            cricket[i] = (cricket[i-1] + football[i-1] + hockey[i-1]) % mod;
            football[i] = (cricket[i-1] + hockey[i-1]) %mod;
        }
        if(i - 2 > 0)
        {
            hockey[i] = (2*cricket[i-2] + football[i-2])%mod;
        }
    }
    cout<<(cricket[n] + football[n] + hockey[n])%mod<<endl;
}