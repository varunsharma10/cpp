#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int arr[100000];
int n;
void output(int a,int b)
{   
    bool nonzero=0;
    for(int i=0;i<n;i++)
    {
        if(i==a || i==b)
        {
            continue;
        }
        if(arr[i]==0)
        {
            if(nonzero)
            {
                cout<<arr[i];
            }
            
        }
        else
        {
            nonzero=1;
            cout<<arr[i];
        }
        
    }
    if(!nonzero)
        {
            cout<<0;
        }
       
    cout<<endl;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    cin>>n;
    vector<int>zero,one,two;
   
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n,greater<int>());
    if(arr[n-1]!=0)
    {
        cout<<-1<<endl;
    }
    else
    {   
        if(sum%3==0)
        {
            output(-1,-1);
        }
        else
        {   
            for(int i=0;i<n;i++)
            {
                if(arr[i]%3==0) zero.push_back(i);
                if(arr[i]%3==1) one.push_back(i);
                if(arr[i]%3==2) two.push_back(i);
            }
            if(sum%3==1)
            {
                if(one.size()>0)
                {
                    output(one.back(),-1);
                }
                else if(two.size()>1)
                {
                    output(two[two.size()-2],two[two.size()-1]);
                }
            }
            if(sum%3==2)
            {
                if(two.size()>0)
                {
                    output(two.back(),-1);
                }
                else if(one.size()>1)
                {
                    output(one[one.size()-2],one[one.size()-1]);
                }
            }
           
        }
    }
    
}