#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int played[51];
int win[51];
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    int n;
    cin>>n;
    vector<int>left;
    int k=n*(n-1)/2;
    for(int i=0;i<k-1;i++)
    {
        int x,y;
        cin>>x>>y;
        played[x]++;
        played[y]++;
        win[x]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(played[i]!=n-1)
        {
            left.push_back(i);
        }
        else
        {
            continue;
        }
    }
    if(win[left[0]]>win[left[1]])
    {
        cout<<left[0]<<" "<<left[1]<<endl;
    }
    else
    {
        cout<<left[1]<<" "<<left[0]<<endl;
    }
    
}