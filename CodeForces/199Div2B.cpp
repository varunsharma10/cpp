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
    int n,m,s,f;
    cin>>n>>m>>s>>f;
    int t[m],l[m],r[m];
    for(int i=0;i<m;i++)
    {
        cin>>t[i]>>l[i]>>r[i];
    }
    t[m]=-1;
    int pos=0,time=0;
    string ans;
    while(s!=f)
    {
        char ch;
        if(s>f)
        ch='L';
        if(s<f)
        ch='R';
        ++time;
        if(t[pos]==time)
        {
            int p1=s;
            int p2 = ch == 'L' ? s - 1 : s + 1;;
            
            if((p1>=l[pos] && p1<=r[pos] )|| (p2 >= l[pos] && p2 <= r[pos]))
            {
                ch='X';
            }
            pos++;
        }
        ans+=ch;
        if(ch=='L')
        {
            s--;
        }
        if(ch=='R')
        {
            s++;
        }

    }
    cout<<ans.c_str()<<endl;
}