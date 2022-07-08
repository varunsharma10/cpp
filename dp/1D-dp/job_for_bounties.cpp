#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    stack<int>st;
    int dp[n+1] = {0};
    int ans = 0;
    dp[0] = 0;

    for(int i=1;i<n;i++)
    {
        if(s[i] == '(')
        {
            dp[i] = 0;
            st.push(i);
        }
        else
        {
            if(st.empty())
            {
                dp[i] = 0;
            }
            else
            {
                int j = st.top();
                st.pop();
                dp[i] = i-j+1;
                if(j > 0)
                {
                    dp[i] += dp[j-1];
                }
                ans = max(ans , dp[i]);
            }
        }

    }
    cout<<ans<<endl;

}