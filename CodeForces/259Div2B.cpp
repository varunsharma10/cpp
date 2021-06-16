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
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int p=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<=a[i+1])
        {
            continue;
        }
        else
        {
            p=1;
            break;
        }
    }
    if(p==0)
    {
        cout<<0<<endl;
    }
    else
    {
        int index=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                index=i;
                break;
            }
        }
        int count=(n-1)-index;
        int x=0;
        for(int i=index+1;i<n-1;i++)
        {
            if(a[i]<=a[i+1])
            {
                continue;
            }
            else
            {
                x=1;
                break;
            }
        }
        if(x==0 && a[n-1]<=a[0])
        {
            cout<<count<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}