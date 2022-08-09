#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n = s.size();
    bool dp[s.size()+1][s.size()+1];
    for(int i=0;i<s.size();i++)
    {
        dp[i][i] = true;
    }
    for(int sz = 2;sz<=n;sz++)
    {
        for(int i=0;i+sz-1<n;i++)
        {
            int start = i;
            int end = i+sz-1;
            if(sz == 2)
            {
                dp[start][end] = (s[start] == s[end]);
            }
            else
            {
                dp[start][end] = (dp[start+1][end-1] == true) && (s[start] == s[end]);
            }
        }
    }
    int m;
    cin>>m;
    while(m--)
    {
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        cout<<dp[l][r]<<" ";
    }
    cout<<endl;

}