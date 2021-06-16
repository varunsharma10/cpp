#include <bits/stdc++.h>
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
    sort(arr,arr+n);
    set<int> s; 
    for (int i = 0; i < n; i++) { 
        s.insert(arr[i]); 
    }
    set<int>::iterator it; 
    for (it = s.begin(); it != s.end(); ++it) 
    {
        cout<<*it<<" ";
    }
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]==arr[i+1])
        {
            cout<<arr[i]<<" ";
        }
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