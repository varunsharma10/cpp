#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n,s;
    cin>>n>>s;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }       
    int idx = 0;
    int start = 0;
    int end = 0;
    int tmp = s;
    int count = 0;
    int maxx = 0;
    for(int i=0;i<n;i++)
    {
        tmp += arr[i];
        count++;
        
        if(tmp < 0)
        {
            tmp = s;
            if(s + arr[i] < 0)
            {
                count = 0;
                tmp = s;
                idx = i+1;
            }
            else
            {
                count = 1;
                tmp = s+arr[i];
                idx = i;
            }
            
        }
        if(maxx < count)
        {
            maxx = count;
            start = idx;
            end = i;
        }
    }
    int maxx2 = 0;
    int idx2 = 0;
    int start2 = 0;
    int end2 = 0;
    int tmp2 = s;
    int count2 = 0;
    for(int i=0;i<n;i++)
    {
        tmp2 += arr[i];
        count2++;
        
        if(tmp2 < 0)
        {
            tmp2 = s;
            count2 =0;
            start2 = i+1;
            
        }
        if(maxx2 < count2)
        {
            maxx2 = count2;
            start2 = idx2;
            end2 = i;
        }
    }
    if(maxx == 0 && maxx2 == 0)
    {
        cout<<-1<<endl;
        return;
    }
    else
    {
        if(maxx2 < maxx)
            cout<<start+1<<" "<<end+1<<endl;
        else
            cout<<start2+1<<" "<<end2+1<<endl;

        return;
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