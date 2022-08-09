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
    ll n;
    cin>>n;
    ll x;
    vector<ll>v;
    vector<ll>w1,w2;
    ll sum1=0;
    ll sum2=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
        if(x>0)
        {
            w1.push_back(x);
            sum1+=x;
        }
        else
        {
            w2.push_back(-x);
            sum2+=(-x);
        }
        
    }
    if(sum1>sum2)
    {
        cout<<"first"<<endl;
        return 0;
    }
    else if(sum1<sum2)
    {
        cout<<"second"<<endl;
        return 0;
    }
    else
    {   
        if(w1.size()>=w2.size())
        {
            for(int i=0;i<w2.size();i++)
            {   
                if(w1[i]==w2[i])
                {
                    continue;
                }
                if(w1[i]>w2[i])
                {
                    cout<<"first"<<endl;
                    return 0;
                }
                else
                {
                    cout<<"second"<<endl;
                    return 0;
                }
                
            }
        }
        else
        {
            for(int i=0;i<w1.size();i++)
            {   
                if(w1[i]==w2[i])
                {
                    continue;
                }
                if(w1[i]>w2[i])
                {
                    cout<<"first"<<endl;
                    return 0;
                }
                else
                {
                    cout<<"second"<<endl;
                    return 0;
                }
                
            }
        }
        if(v[v.size()-1]>0)
        {
            cout<<"first"<<endl;
        }
        else
        {
            cout<<"second"<<endl;
        }
        

    }
    
}