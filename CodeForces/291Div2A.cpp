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
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='9' && i==0){
        
        }
        else
        {
            if(s[i]-'0'>=5)
            {
                s[i] = 9 - (s[i]-'0') + '0';
            }
        }
        cout<<s[i];
    }
    cout<<endl;
}