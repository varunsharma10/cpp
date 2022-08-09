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
    int n,m;
    cin>>n;
    int arr[n];
    int dp[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        dp[i]=sum;
    }
    cin>>m;
    while(m--)
    {
        int num;
		cin >> num;
		auto it = lower_bound(dp, dp + n, num);
		int indx = it - dp;
		cout << indx + 1 << endl;
    }   
}