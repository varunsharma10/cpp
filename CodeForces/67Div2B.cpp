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
    map<string ,int>mp;
    string myname ,name1,action,temp,name2;
    cin>>myname;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>name1;
        cin>>action;
        if(action=="posted" || action == "commented")
        cin>>temp;
        cin>>name2;
        name2=name2.substr(0,name2.size()-2);
        cin>>temp;
        int val =5;
        if(action == "posted")
        val=15;
        if(action == "commented")
        val = 10;
        
        if(name1==myname)
        mp[name2]+=val;
        else
        mp[name1];
        if(name2==myname)
        mp[name1]+=val;
        else
        mp[name2];
    }
    vector<pair<int, string> > ret;
    for (map<string, int>::iterator it = mp.begin(); it != mp.end(); it++)
        ret.push_back(make_pair(-it->second, it->first));
    sort(ret.begin(), ret.end());
    int m = ret.size();
    for (int i = 0; i < m; i++)
        cout << ret[i].second << endl;
    return 0;
}