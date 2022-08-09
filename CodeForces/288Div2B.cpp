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
    int index=s.size()-1;
    for(int i=0;i<s.size();i++)
    {
        if((s[i]-'0')%2==0 )
        {
            index=i;
            if(s[s.size()-1] > s[i])
            {
                break;
            }
        }
    }
    if(index==s.size()-1)
    {
        cout<<-1<<endl;
    }
    else
    {
        swap(s[s.size()-1],s[index]);
        cout<<s<<endl;
    }
    
    
    
}