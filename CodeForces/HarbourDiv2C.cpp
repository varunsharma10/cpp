#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    string s;
    cin>>s;
    int goal1=0,goal2=0,ct1=0,ct2=0;
    for(int i=0;i<6;i++)
    {
        if(i%2==0&&s[i]=='1')
            goal1++;
        else if(s[i]=='1')
            goal2++;
        if(i%2==0&&s[i]=='?')
            ct1++;
        else if(s[i]=='?')
            ct2++;
    }
    int diff1=(goal1+ct1)-goal2;
    int diff2=(goal2+ct2)-goal1;
    if(diff1==3||diff2==3)
        cout<<6;
    else
    {
        for(int i=6;i<10;i++)
        {
            if(i%2==0&&s[i]=='1')
                goal1++;
            else if(i%2==0&&s[i]=='?')
                ct1++;
            else if(i%2!=0&&s[i]=='1')
                goal2++;
            else if(s[i]=='?')
                ct2++;
            diff1=(goal1+ct1)-goal2;
            diff2=(goal2+ct2)-goal1;
            int x1=(10-i)/2;
            int x2=(10-(i+1))/2;
            if(diff1>x1||diff2>x2||i==9)
            {
                cout<<i+1;
                break;
            }
        }
    }
    cout<<endl;

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