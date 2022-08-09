#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int f(int a,int b)
{   
    int t=0;
    for(int i=0;i<a-1;i++)
    {
        t+=arr[i];
    }
    t+=b-1;
    return t;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    int j=0;
    vector<int>v(465);
    for(int i=0;i<n;i++){
        int a,b,c,d,e;
        cin>>a>>b>>c>>d;
        e=f(a,b) + 100;
        for(j = e - d; j < e; j++) v[j]+=c;

    }
    int ans=0;
    for(int i=0;i<465;i++){
        ans=max(ans,v[i]);
    }
    cout<<ans<<endl;
}