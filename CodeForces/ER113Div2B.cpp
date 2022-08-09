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
    string s;
    cin>>s;
    char mat[n][n];  
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            mat[i][j] = '0';
        }
    }
    int one = 0;
    int two = 0;
    vector<int>won;    
    vector<int>tmp;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == '1')
        {
            won.push_back(i);
            one++;
        }
        else
        {
            tmp.push_back(i);
            two++;
        }
    }
    if(two <=2 && two > 0)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++) 
    { 
        if(s[i]=='1') 
        { 
            for(int j=0;j<n;j++) 
            { 
                mat[i][j]='='; 
                mat[j][i]='='; 
            }    
        } 
    } 
    for(int i=0;i<two;i++) 
    { 
        for(int j=0;j<two;j++) 
        { 
            if(mat[tmp[i]][tmp[j]]=='0') 
            { 
                mat[tmp[i]][tmp[j]] ='='; 
                mat[tmp[i]][tmp[j]] = '='; 
            } 
        } 
        if(i==two-1) 
        { 
            mat[tmp[i]][tmp[0]]='+'; 
            mat[tmp[0]][tmp[i]]='-'; 
        } 
        else
        { 
            mat[tmp[i]][tmp[i+1]]='+'; 
            mat[tmp[i+1]][tmp[i]]='-'; 
        } 
    } 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i == j)
                mat[i][j] = 'X';
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {   
            cout<<mat[i][j];
        }
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