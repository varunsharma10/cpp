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
    int t;
    cin>>t;
    while(t--)
    {
        string s;
    	cin >> s;
    vector<char> A={'(',')'};
    vector<char> B={'(',')'};
    vector<char> C={'(',')'};
 
    bool can=0;
    for(int i=0; i<2; i++)
    {
    	for(int j=0; j<2; j++)
    	{
    		for(int k=0; k<2; k++)
    		{ char a=A[i];
    		  char b=B[j];
    		  char c=C[k];
    		  int cnt=0;
    		  bool poss=true;
    		  for(int l=0; l<s.length(); l++)
    		  { if(s[l]=='A')
    		{ if(a=='(')
    		{
    			cnt++;
    		}
    		else 
    		{
    			cnt--;
    		}}
    		else if(s[l]=='B')
    		{ if(b=='(')
    		{
    			cnt++;
    		}
    		else 
    		{
    			cnt--;
    		}
 
    		}
    		if(s[l]=='C')
    		{ if(c=='(')
    		{
    			cnt++;
    		}
    		else 
    		{
    			cnt--;
    		}
 
    		}
 
    		if(cnt<0)
    		{
                  poss=false;
                  break;
    		}
 
    		  }
    		  if(poss && cnt==0)
    		  {
    		  	can=1;
    		  	break;
    		  }
 
 
    		}
    	}
    }
    if(can)
    {
    	cout << "YES" << endl;
    }
    else 
    {
    	cout << "NO" << endl;
    }
}
}
