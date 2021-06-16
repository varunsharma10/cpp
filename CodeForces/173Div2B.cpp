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
    int n;
    cin>>n;
    pair<int,int>p[n];
    string s=" ";
    char a='A';
    char b='G';
    for(int i=0;i<n;i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    int s1=0,s2=0;
    for(int i=0;i<n;i++)
    {
        if(abs(s1+p[i].first-s2)<=500)
        {
            s1+=p[i].first;
            s+=a;
        }
        else
        {
            s2+=p[i].second;
            s+=b;
        }
        
    }
    cout<<s<<endl;


}