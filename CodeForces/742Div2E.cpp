#include <iostream>
using namespace std;


int find(int n)
{
    if(n<2)return 0;
    if(n==2)return 1;
    int comb = ((n*(n-1))/2);
    return comb;
}

int main() {
  int n,t;
  cin>>n>>t;
  int A[n];
  for(int i=0;i<n;i++) cin>>A[i];
  for(int i=0;i<t;i++)
  {
      int type, n1,n2;
      cin>>type>>n1>>n2;
      if(type==1)
      {
          A[n1-1]=n2;
      }
      if(type==2)
      {
          int r= n2-1,l=n1-1;
          int ans=0, anchor=l;
            for(int i=l;i<=r;i++)
            {
              if(A[i]>A[i+1]||i==r)
              { 
               ans+=find(i-anchor+1);
               ans+=(i-anchor+1);
               anchor=i+1;
              }
            }
          cout<<ans<<"\n";
      }
      
  }
  return 0;
}