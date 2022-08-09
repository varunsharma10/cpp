#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int main()
{   
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    send help
    cout << setprecision(15) << fixed;
    int n,k;
    cin>>n>>k;
    int arr[n];
    int b[n];
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        b[i]=arr[i];
    }
    sort(b,b+n,greater<int>());
    for(int i=0;i<k;i++)
    {
        v.push_back(b[i]);
    }
    int x=v[k-1];
    cout<<x<<endl;
    for(int i=0;i<n;i++){
        if(arr[i] >= x)
        {
            if(k>0)
            {
                cout<<i+1;
                k--;
                if(k==0)
                {
                    cout<<endl;
                    return 0;
                }
                else
                {
                    cout<<" ";
                }
                
            }
           

        }
    }
    
}