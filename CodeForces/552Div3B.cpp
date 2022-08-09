#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    getunique(arr);
    sort(arr.begin(),arr.end());
    if(arr.size()>3)
    {
        cout<<-1<<endl;
    }
    if(arr.size()==3)
    {
        if(arr[2] - arr[1] ==arr[1] - arr[0])
        cout<<arr[2]-arr[1]<<endl;
        else
        cout<<-1<<endl;
    }
    if(arr.size()==2)
    {
        if( (arr[1] - arr[0]) % 2 ==0)
        {
            cout<< (arr[1]-arr[0]) / 2 <<endl;
        }
        else
        {
            cout<<arr[1] - arr[0]<<endl;
        }
        
    }
    if(arr.size()==1)
    {
        cout<<0<<endl;
    }
    

}