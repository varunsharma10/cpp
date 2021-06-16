#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,ans=1;
        int d=0;
        cin>>n>>k;
        if(n<k)
        {
            if(k%n==0)
            cout<<(k/n)<<endl;
            else
            cout<<(k/n)+1<<endl;
        }
        if(n>=k)
        {
            if(n%k==0)
            {
                cout<<1<<endl;
            }
            else
            {
                d=(k*((n/k)+1));
                cout<<ans+(d/n)<<endl;
            }
            
        }
    }
}
