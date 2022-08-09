#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve(){
    ll n;
    cin>>n;
    if(n%2== 1){
        cout<<"Bob"<<endl;
    }
    else
    {
    	int count=0;
        while(n%2==0){
            n/=2;
            count++;
        }
        if(n>1){
            cout<<"Alice"<<endl;
        }
        else
        {
            if(count%2)
            {
                cout<<"Bob"<<endl;
            }
            else
            {

                cout<<"Alice"<<endl;
            }
        }
    }
}
 
int main(){

    send help
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}