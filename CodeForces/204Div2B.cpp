#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
const int MAX_N = 1000 * 100 + 5;
vector<int>arr[MAX_N];
vector<pair<int,int>>answer;
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    int n;
    cin>>n;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr[x].push_back(i);
    }   
    for(int i=0;i<MAX_N;i++)
    {
        if(arr[i].size()==1){
            answer.push_back(make_pair(i,0));
        }
        else if(arr[i].size()>1)
        {
            sort(arr[i].begin(),arr[i].end());
            int r=arr[i][1]-arr[i][0];
            bool ok =true;
            for(int j=1;j<arr[i].size();j++){
               ok &= (arr[i][j] - arr[i][j - 1] == r);
                
            }
            if(ok)
            {
                answer.push_back(make_pair(i,r));
            }
        }
    }
    cout<<answer.size()<<endl;
    for(int i=0;i<answer.size();i++)
    {
        cout<<answer[i].first<<" "<<answer[i].second<<" ";
        cout<<endl;
    }

    
}