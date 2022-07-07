#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int s[2*n];
    int oo=0,ee=0,oe=0;
    
    for(int i=0;i<2*n;i++)
    {
        cin>>s[i];
    }
    
    for(int i=0;i<n;i++)
    {
        if((s[i*2])%2 == 0 && (s[(i*2)+1])%2 ==0){
            ee++;
        }
        if((s[i*2])%2 == 1 && (s[(i*2)+1])%2 ==1){
            oo++;
        }
        if((s[i*2])%2 == 1 && (s[(i*2)+1])%2 ==0){
            oe++;
        }
        if((s[i*2])%2 == 1 && (s[(i*2)+1])%2 ==0){
            oe++;
        }
    }
    
    if(oo %2 ==0 && oe ==0)
    {
        cout<<"0"<<endl;
    }
    if(oe ==0 && oo %2 !=0)
    {
        long long int ans=1;
        for(int i=0;i<n;i++)
        {
            ans=(ans*2)%1000000007;
        }
        cout<<ans<<endl;
    }
    if(oe !=0)
    {
        long long int ans=1;
        for(int i=0;i<n-1;i++)
        {
            ans=(ans*2)%1000000007;
        }
        cout<<ans<<endl;
    }
}