#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    set<int>s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        if(s.count(x))
        {
            x++;
        }
        s.insert(x);
    }
    cout<<s.size()<<endl;
    
    
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
