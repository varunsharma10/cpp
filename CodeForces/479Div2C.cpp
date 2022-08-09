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
   int n,k;
   cin>>n>>k;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   sort(arr,arr+n);
   if(k==0)
   {    
       if(arr[0]-1 == 0){
           cout<<-1<<endl;
           return 0;
       }
       cout<<arr[0]-1<<endl;
   }
   else if(arr[k-1]==arr[k])
   {
       cout<<-1<<endl;
   }
   else
   {
       cout<<arr[k-1]<<endl;
   }
   
}