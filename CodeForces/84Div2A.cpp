#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{   
    int ans=0;
    ll n;
    cin>>n;
    while(n!=0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            ans++;
        }
        n /= 10;
    }
    if(ans==7 || ans==4)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    


}