#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
// bool ok = true;
// int count = 0;
// void rec(int i , int j , string s , char last, int count)
// {
//     if(i > j)
//         return;
    
//     if(s[i] == s[j])
//     {
//         rec(i+1 , j-1 , s, last,count);
//     }
//     else
//     {   
//         if(last == ' ')
//         {
//             char tmp = s[i];
//             s.erase(s.begin() + i);
//             rec(i+1 ,j , s, tmp, count + 1);
//             s.insert(i , 1 , tmp);

//             tmp = s[i];
//             s.erase(s.begin() + j);
//             rec(i , j - 1 , s ,tmp,count + 1);
//             s.insert(j , 1 ,tmp);
//         }
//         else if(s[i] == last)
//         {
//             s.erase(s.begin() + i);
//             rec(i+1 , j , s , last,count + 1);
//             s.insert(i , 1 , last);
//         }
//         else if(s[j] == last)
//         {
//             s.erase(s.begin() + j);
//             rec(i , j-1 , s, last,count + 1);
//             s.insert(j , 1 , last);
//         }
//         else
//         {
//             return;
//         }
//     }
// }
// int rec(int i , int j , string s , char last, int count)
// {
//     if(i > j)
//         return count;

//     int r1 , r2 , r3, r4;    
//     if(s[i] == s[j])
//         rec(i+1,j-1,s,last,count);

//     else
//     {
        
//         if(last == ' ')
//         {
//             string tmp = s;
//             last = s[i];
//             s.erase(s.begin() + i);
//             r3 = rec(i+1 , j , s , last , count + 1);
//             string s = tmp;
//             last = s[j];
//             s.erase(s.begin() + j);
//             r4 = rec(i , j-1 , s , last, count + 1);
//         }
//         else if(s[i] == last)
//         {
//             s.erase(s.begin()+i);
//             r1 = rec(i+1 , j , s , last , count + 1);
//         }
//         else if(s[j] == last)
//         {
//             s.erase(s.begin() + j);
//             r2 = rec(i , j-1 , s, last , count + 1);
//         }
//         else
//         {
//             return -1;
//         }
//     }

//     if(r1 == r2 == r3 == r4 == -1)
//         return -1;
    
//     return min({r1,r2,r3,r4});
// }
void solve()
{    
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>res;
    for(int i=0;i<26;i++)
    {
        int count = 0;
        bool ans = true;
        int l = 0;
        int r = n-1;
        char p = ('a' + i);
        while(l <= r)
        {
            if(s[l] != s[r])
            {
                if(s[l] == p)
                {
                    l++;
                    count++;
                }
                else if(s[r] == p)
                {
                    r--;
                    count++;
                }
                else
                {
                    ans = false;
                    break;
                }
            }
            else if(s[l] == s[r])
            {
                l++;
                r--;
            }
        }
        if(ans != false)
        {
            res.push_back(count);
        }
    }
    if(res.size() == 0)
        cout<<-1<<endl;
    else
        cout<<*min_element(res.begin(),res.end())<<endl;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}