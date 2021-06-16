#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int n,k,i,j,a[100005];
int main()
{   
    cin>>n>>k;
  if (k==n) {puts("-1");return 0;}
  for (i=n-k+1;i<=n;i++)
    a[i]=i;
  for (i=1;i<n-k;i++)
    a[i]=i+1;
  a[n-k]=1;
  for (i=1;i<=n;i++) cout<<a[i]<<' ';
  return 0;
}