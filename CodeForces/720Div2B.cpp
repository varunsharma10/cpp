#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n;
    cin>>n;
    int arr[n];
    int minn=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        minn=min(minn,arr[i]);
    }      
    vector<int>v;
    int k=0;
    vector<int>a,b,x,y;
    int even=-1;
    int odd=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==minn)
        {
            if(i%2==0){
                even=i;
            }
            else
            {
                odd=i;
            }
            
        }
    }
        if(even!=-1)
        {   
            for(int i=0;i<n;i+=2)
            {   
               if(i!=even)
               {
                   a.push_back(i+1);
                   b.push_back(even+1);
                   x.push_back(minn);
                   y.push_back(minn);
               }
            }
        
            for(int i=1;i<n;i+=2)
            {
            
                    a.push_back(i+1);
                    b.push_back(even+1);
                    x.push_back(minn+1);
                    y.push_back(minn);
        
               
            }
        }
        else
        {
            for(int i=1;i<n;i+=2)
            {
                arr[i]=minn;
                if(i!=odd)
                {
                    a.push_back(i+1);
                   b.push_back(odd+1);
                   x.push_back(minn);
                   y.push_back(minn);
                }
            }
            for(int i=0;i<n;i+=2)
            {
                
                    a.push_back(i+1);
                    b.push_back(odd+1);
                    x.push_back(minn+1);
                    y.push_back(minn);
            }
        }
        

    cout<<a.size()<<endl;
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" "<<b[i]<<" "<<x[i]<<" "<<y[i];
        cout<<endl;
    }


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