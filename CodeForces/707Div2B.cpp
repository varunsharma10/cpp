#include <bits/stdc++.h>
using namespace std;
int arr[200005];
int val[200005];    
void solve()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        val[i]=0;
    }   
    int k=arr[n-1];
    for (int i = n-1; i >= 0; i--)
    {
        if(k!=0 || arr[i]!=0)
        {
            val[i]=1;
            k=max(k,arr[i]);
            k--;
        }
        else
        {
            k=arr[i];
        }
        
        

    }
    for(int i=0;i<n;i++)
    {
        cout<<val[i]<<" ";
    }
    cout<<endl;

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