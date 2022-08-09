#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
long n,k,maxx,minn,arr[1<<10],ans[1<<10][1<<10];
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    cin>>n>>k;
    int arr[n];
    int minn=1000;
    int maxx=0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        maxx=max(arr[i],maxx);
        minn=min(arr[i],minn);

    }
    if(maxx-minn>k)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=minn;j++)
        ans[i][j]=1;
        for (int j=minn+1;j<=arr[i];j++)
        ans[i][j]=j-minn;
    }
    cout<<"YES"<<endl;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=arr[i];j++)
        {
            if (j>1)cout<<" ";
            cout<<ans[i][j];
        }
    cout<<endl;
    }
    cin.get();cin.get();
    return 0;
}
