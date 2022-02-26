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
    int p = 0;
    string name[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
 
    int i = 1;
    while (true) 
    {
        for (int j = 0; j < 5; j++)
        {
            if (n > i)
                n -= i;
            else 
            {
                cout << name[j] << endl;    
                return;
            }   
        }
        i *= 2;
    }
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}