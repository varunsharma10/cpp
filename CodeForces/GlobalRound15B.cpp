#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int better(int a,int b,int arr[][5],int n)
{
    int count=0;
    for(int j=0;j<5;j++)
    {
        if(arr[a][j] > arr[b][j])
        {
            count++;
        }
    }
    if(count>2)
    {
        return b;
    }
    else
    return a;
}
void solve()
{    
    int n;
    cin>>n;
    int arr[n][5];
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
        }
    }
    int betterint=0;
    for(int i=1;i<n;i++)
    {
        betterint = better(betterint,i,arr,n);
    }
    bool ok = true;
    for(int i=0;i<n;i++)
    {   
        int count=0;
        if(i==betterint)
            continue;
        for(int j=0;j<5;j++)
        {
            if(arr[betterint][j] > arr[i][j])
            {
                count++;
            }
        }
        if(count>2)
        {
            ok= false;
            break;
        }
    }
    if(ok)
    {
        cout<<betterint+1<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}