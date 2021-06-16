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
    double b,s;
    cin>>n>>b>>s;
    double arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    double x,y;
    cin>>x>>y;
    double distance=INT_MAX;
        int j=0;
        for(int i=1;i<n;i++)
        {
            double distance2;
            double k2=(x-arr[i])*(x-arr[i]) + (y)*(y);
            distance2=sqrt(k2);
            if(distance2<=distance)
            {
                distance=distance2;
                j=i;
 
            }
        }   
    double time1= (distance/s) + (arr[j]/b);
    double time2;
    int mark=0;
    for(int i=1;i<n;i++)
        {   
            double g=(x-arr[i])*(x-arr[i]) + (y)*(y);
            double dis=sqrt(g);
            time2=(arr[i]/b) + (dis/s);
            if(time2<time1)
            {
                time1=time2;
                mark=i;
 
            }
        }
    if(mark==0)
    {
        cout<<j+1<<endl;
    }
    else
    {
        cout<<mark+1<<endl;
    }
    
}
