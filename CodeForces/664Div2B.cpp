#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int n,m,x,y;
void f(int i,int j){
    cout<<(i+x-2)%n+1<<" "<<(j+y-2)%m+1<<endl;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    cin>>n>>m>>x>>y;
   for(int i=1;i<=n;i++)
   {
       if(i&1)
       for(int j=1;j<=m;j++)
       {
           f(i,j);
       }
       else
       {
           for(int j=m;j>=1;j--)
           {
               f(i,j);
           }
       }
       
   }
}