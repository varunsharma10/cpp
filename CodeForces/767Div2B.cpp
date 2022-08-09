#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
ll l,r,k;
void fillPrimes(vector<ll>& prime, ll high)
{
    bool ck[high + 1];
    memset(ck, true, sizeof(ck));
    ck[1] = false;
    ck[0] = false;
    for (ll i = 2; (i * i) <= high; i++) {
        if (ck[i] == true) {
            for (ll j = i * i; j <= high; j = j + i) {
                ck[j] = false;
            }
        }
    }
    for (ll i = 2; i * i <= high; i++) {
        if (ck[i] == true) {
            prime.push_back(i);
        }
    }
}

ll segmentedSieve(ll low, ll high)
{
    bool prime[high - low + 1];
    memset(prime, true, sizeof(prime));
 
    vector<ll> chprime;
    fillPrimes(chprime, high);
    int count = 0;
    for (ll i : chprime) {
        ll lower = (low / i);  
        if (lower <= 1) {
            lower = i + i;
        }
        else if (low % i) {
            lower = (lower * i) + i;
        }
        else {
            lower = (lower * i);
        }
        for (ll j = lower; j <= high; j = j + i) {
            prime[j - low] = false;
        }
    }
   
    for (ll i = low; i <= high; i++) {
        if (prime[i - low] == true) 
        {
            count++;
        }
    }
    return count;
}
void solve() 
{ 
    cin>>l>>r>>k; 
 
    if ((l-r)==0 && l != 1) 
    { 
        cout << "YES\n"; 
        return; 
    }
    ll ans = (r - l)/2;
    if(r % 2 != 0 || l %2 !=0)
        ans++;
    
 
    if (ans > k) 
        cout << "NO" << endl; 
    else 
        cout << "YES" << endl; 
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