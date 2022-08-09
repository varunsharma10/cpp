#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    list<int> list1;
    cin>>n;
    int arr[n];
    int diff=0,a=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            diff= -(arr[i] - arr[j]);
            list1.push_front(diff);

        }
        
    }
    list1.sort();
    list1.unique();
    a=list1.size();
    if(list1.empty())
    {
        cout<<"0"<<endl;
        return;
    }
    else
    {
        cout<<a<<endl;
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
