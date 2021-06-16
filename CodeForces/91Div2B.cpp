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
    int a=0,b=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='4')
        {
            a++;
        }
        else if(s[i]=='7')
        {
            b++;
        }
    }
    if(a==0 && b==0)
    {
        cout<<-1<<endl;
    }
    else if(a>=b)
    {
        cout<<4<<endl;
    }
    else
    {
        cout<<7<<endl;
    }
    
}