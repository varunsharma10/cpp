#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int i,j,m,n,p,k;
long long ans=1;
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    string s;
    cin>>s;
    int len=s.size();
    for (i=1;i<=len;i++)
    {
        if (s[i-1]-'0'+s[i]-'0'==9)
        {
            k++;
        }
        else 
        { 
            if (k>0&&k%2==0)
            {
                ans*=(k/2+1);
            }
            k=0;
        }
    }
    
   cout<<ans<<endl;
}