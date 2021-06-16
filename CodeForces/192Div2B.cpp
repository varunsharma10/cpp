#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int n,m,i,j,x,y,arr[1000];
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    cin>>n>>m;
    while(m--)
    {
        cin>>x>>y;
        for(i=1;i<=n;i++)
        {
            arr[x]++;
            arr[y]++;
        }
    }
    for(i=1;i<=n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    cout<<n-1<<endl;
    for(i=1;i<=n;i++){
        if(i!=j){
            cout<<j<<" "<<i<<endl;
        }
    }
    return 0;
}