#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }       
    int alice = 0;
    int bob = 0;
    int start = 0;
    int end = n;
    int turn = 0;
    int last =0;
    int moves = 0;
    while (start < end) {
        int current = 0;
 
        if (turn == 0) {
            while (start < end && current <= last)
                current += arr[start++];
 
            alice += current;
        } else {
            while (start < end && current <= last)
                current += arr[--end];
 
            bob += current;
        }
 
        moves++;
        turn = 1 - turn;
        last = current;
    }
    cout<<moves<<" "<<alice<<" "<<bob<<endl;
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