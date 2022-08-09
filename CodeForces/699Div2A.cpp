#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int x,y;
      cin>>x>>y;
      string s;
      cin>>s;
 
 
      if(x==0 && y==0)
      {
        cout<<"YES\n";
        return;
      }
      int r = 0, l = 0, d = 0, u = 0;
      for (int i = 0; i < s.length(); i++)
      {
        if (s[i] == 'R')
          r++;
        else if (s[i] == 'L')
          l++;
        else if (s[i] == 'U')
          u++;
        else
          d++;
      }
      if (x >= 0 && y >= 0)
      {
        if (r >= x && u >= y)
          cout << "YES" << endl;
        else
          cout << "NO" << endl;
      }
 
      else if (x >= 0 && y <= 0)
      {
        if (r >= x && d >= abs(y))
          cout << "YES" << endl;
        else
          cout << "NO" << endl;
      }
 
      else if (x <= 0 && y >= 0)
      {
        if (l >= abs(x) && u >= y)
          cout << "YES" << endl;
        else
          cout << "NO" << endl;
      }
      
      else if (x <= 0 && y <= 0)
      {
        if (l >= abs(x) && d >= abs(y))
          cout << "YES" << endl;
        else
          cout << "NO" << endl;
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