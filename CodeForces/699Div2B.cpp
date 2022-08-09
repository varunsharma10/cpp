#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x=k;
    int cnt=0;
    int p=0;
    int f=0;
    while(p<n && k>0)
    {
        cnt=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<arr[i+1])
        {
            arr[i]++;
            p=i+1;
            cnt=1;
            k--;
            break;

        }
    }
    if(cnt)
    {
        continue;
    }
    else
    {
        f=1;
        cout<<-1<<endl; 
        break;
    }
}
    
if(f==0)
{
    cout<<p<<endl;
}
    

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