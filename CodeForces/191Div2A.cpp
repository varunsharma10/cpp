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
    vector<int>v;
    int arr[n];
    int cnt_1=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            cnt_1++;
        }
    }
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        
        for (int j = i; j < n; j++)
        {   int diff_cnt=0;
            for (int k = i; k <= j; k++)
            {
               
                if (arr[k] == 0)
                {
                    diff_cnt++;
                }
                else
                {
                    diff_cnt--;
                }
            }
            int total_cnt = diff_cnt + cnt_1;
            ans = max(ans, total_cnt);
        }
    }
 
    cout << ans << endl;
}

