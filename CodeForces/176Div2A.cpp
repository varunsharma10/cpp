#include <bits/stdc++.h>
using namespace std;
int main()
{
    char arr[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    int black,white;
    for (int i = 0; i < 3; i++)
    {   
        for (int j = 0; j < 3; j++)
        {
            black=0,white=0;
            if(arr[i][j]=='#')
            black++;
            if(arr[i][j]=='.')
            white++;
            if(arr[i+1][j]=='#')
            black++;
            if(arr[i+1][j]=='.')
            white++;
            if(arr[i][j+1]=='#')
            black++;
            if(arr[i][j+1]=='.')
            white++;
            if(arr[i+1][j+1]=='#')
            black++;
            if(arr[i+1][j+1]=='.')
            white++;

            if(black>=3 || white>=3)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        
       
    }
    cout<<"NO"<<endl;
    return 0;
    
    
}