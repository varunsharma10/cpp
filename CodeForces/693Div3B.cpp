#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    int one=0;
    int two=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            one++;
        }
        if(arr[i]==2)
        {
            two++;
        }
        
    }
    if(one%2!=0)
    {
        cout<<"NO"<<endl;
        return;
    }
    if(one>0 && one%2==0)
    {   
        cout<<"YES"<<endl;
        return;
    }
    if(one==0 && two%2==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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
