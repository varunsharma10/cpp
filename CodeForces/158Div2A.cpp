#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    int k= n-1;
    for (int i = 0; i <= 9; i++)
    {
        if((a*10+i) %b==0)
        {
            cout<<a*10+i;
            while(k--)
            {
                cout<<0;
            }
            return 0;
        }
    }
    cout<<-1;
    
    
}
