#include<bits/stdc++.h>
using namespace std;
 
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define mt              make_tuple
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define range(a,b)      substr(a,b-a+1)
#define w(x)            int x; cin>>x; while(x--)
#define trace(x)        cerr<<#x<<": "<<x<<" "<<endl;
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
 
int32_t main()
{  
   #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
   #endif
 
    FIO;
    w(x)
    {
    	int n;
    	cin >> n;
    	int arr[n];
    	int alice=0;
    	int bob=0;
    	
    	for(int i=0; i<n; i++)
    	{
    		cin >> arr[i];
    		
    	}
    	sort(arr,arr+n);
    	int chance=1;
    	for(int i=n-1; i>=0; i--)
    	{ if(chance%2!=0)
    		{
    			if(arr[i]%2==0)
    			{
    				alice+=arr[i];
    			}
    			chance++;
    		}
    	  else if(chance%2==0)
    	  {
    	  	if(arr[i]%2!=0)
    	  	{
    	  		bob+=arr[i];
    	  	}
    	  	chance++;
 
    	  }
 
    	}
 
    	if(alice>bob)
    	{
    		cout <<"Alice" << endl;
    	}
    	else if(bob>alice){
    		cout << "Bob" << endl;
    	}
    	else 
    		{cout << "Tie" << endl;}
    	
 
    }
    
    return 0;
}