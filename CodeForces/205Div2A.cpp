#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int sum1=0,sum2=0;
    pair<int ,int>p[t];
    for (int i = 0; i < t; i++)
    {
        cin>>p[i].first;
        sum1=sum1+p[i].first;
        cin>>p[i].second;
        sum2+=p[i].second;
    }
    if(sum1%2==0 && sum2%2==0)
    {
        cout<<0<<endl;
        return 0;
    }
    else if((sum1%2==0 && sum2%2!=0) || (sum1%2!=0 && sum2%2==0)  )
    {
        cout<<-1<<endl;
        return 0;
    }
    for (int i = 0; i < t; i++)
    {
        if((p[i].first %2==0 && p[i].second%2!=0) || (p[i].first%2!=0 && p[i].second%2==0) )
        {
            cout<<1<<endl;
            return 0;
        }

    }
    cout<<-1<<endl;
    return 0;
    
}