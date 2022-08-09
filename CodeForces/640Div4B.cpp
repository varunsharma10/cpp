#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    ll n,k;
    cin>>n>>k;
    if(n%2!=0 && k%2==0)
    {
        cout<<"NO"<<endl;
        return;
    }
    vector<int> solution;
    bool odd = k % 2 == 0 || n % 2 != 0;
    int sum = 0;
 
    for (int i = 0; i < k - 1; i++) {
        solution.push_back(odd ? 1 : 2);
        sum += solution.back();
    }
 
    if (n <= sum) {
        cout << "NO" << '\n';
        return;
    }
    solution.push_back(n-sum);
    cout<<"YES"<<endl;
    for(int i=0;i<solution.size();i++)
    {
        cout<<solution[i]<<" ";
    }
    cout<<endl;

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