#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
map<char,int>mp1;
map<char,int>mp2;
int a1[1000];
int a2[1000];
int main()
{   
    send help
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.size();i++)
    {
        a1[a[i]-'a']++;
    }
    for(int i=0;i<b.size();i++)
    {
        a2[b[i]-'a']++;
    }
    int ans=0;
    int minn=INT_MAX;
    for(int i=0;i<26;i++){
        
        if(a2[i]>a1[i])
        {
           minn=a1[i];
        }
        else
        {
            minn=a2[i];
        }
        if(minn==0 && a2[i]!=0)
        {
            ans=0;
            break;
        }
        else
        {
            ans+=minn;
        }        
    }
    if(ans==0)
    {
        cout<<ans-1<<endl;
    }
    else
    {
        cout<<ans<<endl;
    }
    
    
    
}