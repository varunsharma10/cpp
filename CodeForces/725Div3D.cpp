#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}


vector<int> primes;

ll count_prime(ll a)
{
    ll count =0;
    if(a%2==0)
    {
        while(a%2==0){
            count++;
            a/=2;
        }
    }
    for(int i =3; i*i<=a; i+=2){
        while(a%i==0)
        {
            a/=i;
            count++;
        }
        
    }
    if(a!=1)
    {
        count++;
    }
    return count;
}

bool solve()
{    
    ll a,b,c;
    cin>>a>>b>>c;
    bool ans = false;
    if(c==1)
    {
        return a!=b && (a%b==0 || b%a ==0);
    }
    else
    {
        return c <= count_prime(a) + count_prime(b);
    }
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t;
    cin>>t;
    while(t--)
    {
        puts(solve() ? "YES" : "NO");
    }
}