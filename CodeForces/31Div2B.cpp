#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
vector<int>a;
string s;
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    cin>>s;
    for(int i=0;i<s.size();i++) 
    if(s[i] == '@') a.push_back(i);
    for(int i=1;i<a.size();i++) 
    {
    if(a[i] - a[i-1] < 3)
    {
        cout << "No solution";
        return 0;
    }
    }
    if(a.empty())
    {
        cout << "No solution";
        return 0;
    }
    if(a.back() == s.length()-1)
    {
        cout << "No solution";
        return 0;
    }
    if(a[0] == 0)
    {
        cout << "No solution";
        return 0;
    }
 
    bool first = true;
    int from = 0;
    for(int i=0;i<=a.size()-1;i++)
    {
        if(!first) cout << ",";
        if(i < a.size()-1) 
        cout << s.substr(from,a[i]-from+2);
        else cout << s.substr(from);
        first = false;
        from = a[i] + 2;
 
    }

}