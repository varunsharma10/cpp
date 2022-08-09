#include<bits/stdc++.h>
using namespace std;
bool isprime(int n) 
{ 
    
    if (n <= 1) 
        return false; 
  

    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
} 
void solve()
{
        int d;
        cin>>d;
        int a,b;
        a=1+d;
        
        while(!isprime(a))
        {
            a++;
            
        }
        b=a+d;
       
        while(!isprime(b))
        {
            b++;
            
        }
        cout<<a*b<<endl;
        return;

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
