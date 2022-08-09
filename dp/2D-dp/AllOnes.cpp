#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];   
            // cout<<arr[i][j]<<" ";
        }
        // cout<<endl;
    }
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i == 0 || j == 0))
            {
                if(arr[i][j] == 1)
                    ans = max(ans , arr[i][j]);

                continue;

            }
            arr[i][j] = min({arr[i-1][j] , arr[i-1][j-1] , arr[i][j-1]}) + 1;
            ans = max(ans , arr[i][j]);

        }
    }

}