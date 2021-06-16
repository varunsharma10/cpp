#include<bits/stdc++.h>
using namespace std;
bool isprime(long long n)
{
    int skip=0;
    if(n<2)
        return false;
    else if(n==2)
        return true;
    long long limit=sqrt(n);
    if(n%2==0)
        return false;
        for(int j=3; j<=limit; j+=2){
            if(n%j==0)
                return false;
            }
    return true;
}
int main(void) {
    int n;
    cin>>n;
    long long a;
   
        while(n--)
        {
            cin>>a;
            long long sqt= sqrt(a);
            if(sqt*sqt==a && isprime(sqt)==true)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            
            
        }
    
 
}