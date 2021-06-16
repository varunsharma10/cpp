#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x[t],y[t];
    for (int i = 0; i < t; i++)
        {
            cin>>x[i];
            cin>>y[i];
        }
   
    int n=0;
    for (int i = 0; i < t; i++)
    {
         bool r(false),l(false),u(false),d(false);
        for (int j = 0; j < t; j++)
        {
            if(x[i] > x[j] && y[i]==y[j]) r=true;
            if(x[i] < x[j] && y[i]==y[j]) l=true;
            if(x[i]== x[j] && y[i] > y[j]) u=true;
            if(x[i] == x[j] && y[i] < y[j]) d=true;
        }
        if(r && l && u && d)
        {
            n++;
        }
        
    }
        
    
    cout<<n<<endl;
    
}
