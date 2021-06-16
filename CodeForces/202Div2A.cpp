#include <bits/stdc++.h>
using namespace std;
void solve()
{
    
}
int main()
{
    int t;
    cin>>t;
    int a=0,b=0,c=0;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < t; i++)
    {
        if(arr[i]==25)
        {
            a++;
        }
        if(arr[i]==50)
        {
            b++;
            if(a>0)
            {
                a--;
            }
            else
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        if(arr[i]==100)
        {
            c++;
            if(b>0 && a>0)
            {
                b--;
                a--;
            }
            else if(a>=3)
            {
                a=a-3;
            }
            else
            {
                cout<<"NO"<<endl;
                return 0;
            }
            
        }
    }
    cout<<"YES"<<endl;
    return 0;
    
    
}