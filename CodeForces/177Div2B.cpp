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
    int n,m,d;
    cin>>n>>m>>d;
    int arr[n][m];
   vector<ll>ans;
    int minn=INT_MAX;
    int maxx=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int dif=arr[0][0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            if(abs(arr[i][j]-dif)%d!=0){
                cout<<-1<<endl;
                return 0;
            }
        }
    }

    for(int i=0;i<n;i++)
    {   
        for(int j=0;j<m;j++){
            ans.push_back(arr[i][j]);
        }
    }
    sort(ans.begin(),ans.end());
    int mid=((n*m)/2);
    int count=0;
    for(int i=0;i<n*m;i++){
        count+=(abs(ans[i]-ans[mid])/d);
    }
    cout<<count<<endl;



}