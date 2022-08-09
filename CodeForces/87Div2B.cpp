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
    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]=='P')
            {
                if(i>0 && arr[i-1][j]=='W')
                {
                    arr[i-1][j]='.';
                    count++;
                }
                if(j>0 && arr[i][j-1]=='W')
                {
                    arr[i][j-1]='.';
                    count++;
                }
                if(i<n-1 && arr[i+1][j]=='W')
                {
                    arr[i+1][j]='.';
                    count++;
                }
                if(j<m-1 && arr[i][j+1]=='W')
                {
                    arr[i][j+1]='.';
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;
}