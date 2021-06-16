#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
const int MAXN = 2100;
 
int N;
int arr[MAXN];
int oarr[MAXN];
 
void r1()
{
    for (int i = 0; i < N; i += 2)
        swap (arr[i], arr[i+1]);
}
 
void r2()
{
    for (int i = 0; i < N / 2; i++)
        swap (arr[i], arr[i+N/2]);
}
 
int main()
{   
    cin >> N;
    N *= 2;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        arr[i]--;
 
        oarr[i] = arr[i];
    }
 
    int cp = 0;
    while (cp < 4 * N)
    {
        bool win = true;
        for (int i = 0; i < N; i++)
            if (arr[i] != i) win = false;
 
        if (win) break;
        if (cp % 2 == 0) r1();
        else r2();
        cp++;
    }
 
    for (int i = 0; i < N; i++)
        arr[i] = oarr[i];
    int cr = 0;
    while (cr < 4 * N)
    {
        bool win = true;
        for (int i = 0; i < N; i++)
            if (arr[i] != i) win = false;
 
        if (win) break;
        if (cr % 2 == 0) r2();
        else r1();
        cr++;        
    }
 
    int r = min (cr, cp);
    if (r >= 4 * N) cout << "-1\n";
    else cout << r << "\n";

}