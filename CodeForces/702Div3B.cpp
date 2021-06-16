#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    int c0=0,c1=0,c2=0;
    for(int i= 0; i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%3==0)
        c0++;
        if(arr[i]%3==1)
        c1++;
        if(arr[i]%3==2)
        c2++;
    }   
    int ans=1;
    int count=0;
    if(c0==c1 && c1==c2)
    {
        cout<<count<<endl;
        return;
    }
    else
    {
        while(ans==1)
        {   
            if(max(c0,max(c1,c2))==c0 )
            {
                if(min(c0,min(c1,c2))==c1)
                {
                    count++;
                    c0--;
                    c1++;
                }
                else
                {
                    count+=2;
                    c0--;
                    c2++;
                }
                if(c0==c1 && c1==c2)
                {
                    ans=0;
                    cout<<count<<endl;
                    return;
                }
            }
            if(max(c0,max(c1,c2))==c1)
            {
                if(min(c0,min(c1,c2))==c0)
                {
                    count+=2;
                    c0++;
                    c1--;
                }
                else
                {
                    count++;
                    c1--;
                    c2++;
                }
                if(c0==c1 && c1==c2)
                {
                    ans=0;
                    cout<<count<<endl;
                    return;
                }
            }
            if(max(c0,max(c1,c2))==c2)
            {
                if(min(c0,min(c1,c2))==c1)
                {
                    count+=2;
                    c2--;
                    c1++;
                }
                else
                {
                    count++;
                    c2--;
                    c0++;
                }
                if(c0==c1 && c1==c2)
                {
                    ans=0;
                    cout<<count<<endl;
                    return;
                }
            }
        }
    }
    
    
    

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}