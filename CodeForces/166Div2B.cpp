#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
bool isPrime(int n)
{
    
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}
int nextPrime(int N)
{
 
    if (N <= 1)
        return 2;
 
    int prime = N;
    bool found = isPrime(N);
    while (!found) {
        prime++;
 
        if (isPrime(prime))
            found = true;
    }
 
    return prime;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    int n,m;
    int arr2[100005];
    for(int i=1;i<=100000;i++){
        arr2[i]=nextPrime(i);
    }
    cin>>n>>m;
    int arr[n][m];
    int max_minr=100000;
    int max_minc=100000;
    int minir=0;
    int minic=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {   
            if(!isPrime(arr[i][j]))
            {
               minir= minir+(arr2[arr[i][j]]-arr[i][j]);
            }
        }
        max_minr=min(minir,max_minr);
        minir=0;
        
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {   
            if(!isPrime(arr[j][i]))
            {
                minic=minic +(arr2[arr[j][i]]-arr[j][i]);
            }
        }
        max_minc=min(minic,max_minc);
        minic=0;
    }
    cout<<min(max_minc,max_minr)<<endl;
    
}