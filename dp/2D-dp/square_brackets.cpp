#include <bits/stdc++.h>
using namespace std;
bool openIndex[50];
int dp[50][50];
int n;
int squareBrackets(int pos = 0, int open = 0)
{
    if (open < 0)
    {
        return 0;
    }
    if (pos == n)
    {
        return (open == 0);
    }
    if (dp[pos][open] != -1)
    {
        return dp[pos][open];
    }
    int ans = 0;
    if (openIndex[pos])
    {
        return squareBrackets(pos + 1, open + 1);
    }
    ans = squareBrackets(pos + 1, open + 1) + squareBrackets(pos + 1, open - 1);

    dp[pos][open] = ans;

    return ans;
}

int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        cin >> n;
        n = n << 1;

        int k;
        cin >> k;

        memset(openIndex, 0, sizeof(openIndex));

        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            openIndex[x - 1] = 1;
        }

        memset(dp, -1, sizeof(dp));

        cout << squareBrackets() << endl;
    }

    return 0;
}