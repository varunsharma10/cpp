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
    string ans;
    if(s[0]=='-')
    {
        ans+='(';
    }
    ans+='$';
    string x="";
    string y="";
    string z="";
    int p=s.size();
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='.')
        {   
            p=i;
            break;
        }
        else
        {
            y+=s[i];
        }  
    }
    for(int i=p+1;i<s.size();i++)
    {
        z+=s[i];
    }
    bool ok=false;
    if(z.size()>=2)
    {
        z.erase(2);
        ok =true;
    }
    int k=0;
    for(int i=y.size()-1;i>=0;i--)
    {   
        if(y[i]=='-')
        {
            break;
        }
        if(k==3)
        {
            k=0;
            x+=',';
            i++;
        }
        else
        {
            x+=y[i];
            k++;
        }
        
    }
   for(int i=x.size()-1;i>=0;i--)
   {
       ans+=x[i];
   }
    if(p!=s.size()){
        ans+='.';
        if(ok)
        {
            ans+=z;
        }
        else
        {
            if(z.size()==1)
            {
                ans+=z;
                ans+='0';
            }
        }
    }
    else
    {
        ans+='.';
        ans+='0';
        ans+='0';
    }
    

   if(s[0]=='-')
   {
       ans+=')';
   }
   cout<<ans<<endl;
    
}