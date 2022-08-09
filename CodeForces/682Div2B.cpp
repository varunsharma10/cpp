#include<bits/stdc++.h>
using namespace std;
void solve()
{
    
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int sum=0;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(mp[arr[i]] >= 2)
            {
                cout<<"YES"<<endl;
                return;
            }
        }
        cout<<"NO"<<endl;
        return;
    
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
