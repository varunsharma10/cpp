#include<bits/stdc++.h>
using namespace std;
void solve()
{   
    int n,d;
    cin>>n>>d;
    int arr[n];
    int k=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > d)
        {
            k=1;
            break;
        }
    }
    if(k==0)
    {
        cout<<"YES"<<endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
         for (int j = i+1; j < n; j++)
        {
            if((arr[i] + arr[j]) <= d  )
            {
                cout<<"YES"<<endl;
                return;
            }
            
        }
    }
    cout<<"NO"<<endl;
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
