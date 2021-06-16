#include<bits/stdc++.h>
using namespace std;

 
int32_t main()
{  
   #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
   #endif
 
   int t;
   cin>>t;
   while(t--)
    {
    	int n,x;
    	cin >> n >> x;
    	int arr[n];
    	int sum=0;
    	int ans=0;
    	for(int i=0; i<n; i++)
    	{
    		cin >>arr[i];
    		int k=arr[i]/x;
    		if(arr[i]%x==0)
    		{
    			ans+=k;
    		}
    		else {
    			ans+=k+1;
    		}
 
    		sum+=arr[i];
    	}
    	int res=sum/x;
    	if(sum%x!=0)
    	{
            res++;
    	}
    	cout << res << " " << ans << endl;
 
    }
    
    return 0;
}