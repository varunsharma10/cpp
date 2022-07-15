#include<bits/stdc++.h>
using namespace std;
#define lld long long

lld l, r;
lld ret = 0LL;
lld br = 1;
int poz = 0;

int main()
{
    cin>>l>>r;
    // lld br = 1;
    lld razl = r - l;
    while (razl >= br)
    {
        ret += br;
        br *= 2;
        poz++;
    }
    while (r >= br)
    {
        if ((((l>>poz)^(r>>poz))&1LL)==1LL) ret += br;
        br *= 2;
        poz++;
    }
    cout << ret << endl;

}