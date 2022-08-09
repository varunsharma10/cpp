#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
       
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int b[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            b[i][j]=1;
        }
    }
    int q;
    for (int i=0;i<n;i++)
    for (int j=0;j<m;j++)
    {
        cin>>q;
        arr[i][j]=q;
        if (q==1)continue;
        for (int q=0;q<m;q++)
        b[i][q]=0;
        for (int q=0;q<n;q++)
        b[q][j]=0;
    }
   
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {   
            int temp=0;
            for (int q=0;q<m;q++)
            temp|=b[i][q];
            for (int q=0;q<n;q++)
            temp|=b[q][j];
            
            if(temp!=arr[i][j])
            {
                cout<<"NO"<<endl;
                return 0;
            }

        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}