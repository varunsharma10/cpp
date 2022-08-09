#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char s[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>s[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j=0; j < m; j++)
        {
            if(s[i][j] == '.' && i%2==0 && j%2==0)
            {
                cout<<"W";
            }
            if(s[i][j] == '.' && i%2==0 && j%2!=0)
            {
                cout<<"B";
            }
            if(s[i][j] == '.' && i%2!=0 && j%2!=0)
            {
                cout<<"W";
            }
            if(s[i][j] == '.' && i%2!=0 && j%2==0)
            {
                cout<<"B";
            }
            if(s[i][j]=='-')
            {
                cout<<"-";
            }
            
        }
        cout<<endl;
    }
    
    
}   
