#include <bits/stdc++.h>
using namespace std;
void solve()
{   
    int n;
    cin>>n;
    char matrix[n][n];
    int f=1;
    int x1,y1,x2,y2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
            if(matrix[i][j]=='*')
            {
                if(f)
                {
                    x1=i;
                    y1=j;
                    f=0;
                }
                else
                {
                    x2=i;
                    y2=j;
                }
                
            }
        }
    }   
    if(x1==x2)
    {
        if(x1!=n-1)
        {
            matrix[x1+1][y1]='*';
            matrix[x2+1][y2]='*';
        }
        else
        {
            matrix[x1-1][y1]='*';
            matrix[x2-1][y2]='*';
        } 
    }
    else if(y1==y2)
    {
        if(y1!=n-1)
        {
            matrix[x1][y1+1]='*';
            matrix[x2][y2+1]='*';
        }
        else
        {
            matrix[x1][y1-1]='*';
            matrix[x2][y2-1]='*';
        }
        
    }
    else
    {
        matrix[x1][y2]='*';
        matrix[x2][y1]='*';
    }
   
   for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j];
        }
        cout<<endl;
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