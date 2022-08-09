#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long double k;
        cin>>n>>k;
        long double arr[n];
        for (int i = 0;  i< n; i++)
        {
            cin>>arr[i];
        }
        long double s1=0,s2=0;
        for (int i = 1; i < n; i++)
        {   
            s2 = s2 + arr[i - 1];
            s1 = s1 + arr[i - 1];
			if (arr[i] / s1 * ((1.0 * 100)) > k)
			{
				long double s = ((arr[i] * (1.0 * 100)) / k) - s1;
				s = ceil(s);
				s1 = s1 + s;
			}
		}
		cout << (long long int)(s1 - s2) << "\n";
        
        
        
    }
}
