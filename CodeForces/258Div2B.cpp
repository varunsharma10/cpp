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
    int arr[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        b[i]=arr[i];
    }
    map<int,int>mp;
    sort(b,b+n);
    for(int i=0;i<n;i++)
    {
        mp[b[i]]=i;
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=mp[arr[i]];
    }
    int l=-1,r=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=i)
        {
            l=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]!=i)
        {
            r=i;
            break;
        }
    }
    if(r==-1 || l==-1)
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1;
    }
    else
    {
        reverse(arr+l,arr+r+1);
        int ok = true;
		for (int i = 0; i < n; i++) {
			if (arr[i] != i) {
				ok = false;
			}
		}
		if (ok) {
			cout << "yes" << endl;
			cout << l + 1 << " " << r + 1 << endl;
		} else {
			cout << "no" << endl;
		}
	}
	return 0;
    
}
