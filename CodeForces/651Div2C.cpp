#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
const int N = 50000;
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
bool check_prime(int n)
{
    for(int i=2;i < min(N,n);i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
void solve()
{    
    int n;
	cin >> n;
	bool lose = (n == 1);
	if(n > 2 && n % 2 == 0){
		if((n & (n - 1)) == 0)
			lose = 1;
		else if(n % 4 != 0 && check_prime(n / 2))
			lose = 1;
	}  
    if(lose){
        cout<<"FastestFinger"<<endl;
        
    }   
    else
    {
        cout<<"Ashishgup"<<endl;
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
        solve();
    }
}