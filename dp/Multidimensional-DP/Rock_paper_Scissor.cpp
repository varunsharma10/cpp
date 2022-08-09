#include<bits/stdc++.h>
using namespace std;

#define ll long long int

double dp[110][110][110];


double f1(int r , int s , int p)
{
    if(r ==0 || s == 0)
        return 0.0;
    if(p == 0)
        return 1.0;
    
    if(dp[r][s][p] != -1.0)
        return dp[r][s][p];
    
    double tot = r*s + r*p + s*p;

    double res = 0.0;

    res += f1(r-1 , s ,p)* ((r*p)/tot);
    res += f1(r , s-1 , p)* ((r*s)/tot);
    res += f1(r, s, p-1) * ((s*p)/tot);

    return dp[r][s][p] = res;
}

double f2(int r , int s , int p)
{
    if(p ==0 || s== 0)
        return 0.0;
    
    if(r == 0)
        return 1.0;
    
    if(dp[r][s][p] != -1.0)
        return dp[r][s][p];
    
    double tot = r*s + r*p + s*p;

    double res = 0.0;

    res += f2(r-1 , s ,p)* ((r*p)/tot);
    res += f2(r , s-1 , p)* ((r*s)/tot);
    res += f2(r, s, p-1) * ((s*p)/tot);
    
    return dp[r][s][p] = res;
}
double f3(int r , int s,  int p)
{
    if( r == 0 || p == 0)
        return 0.0;
    if(s == 0)
        return 1.0;
    
    if(dp[r][s][p] != -1.0)
        return dp[r][s][p];
    
    double tot = r*s + r*p + s*p;

    double res = 0.0;

    res += f2(r-1 , s ,p)* ((r*p)/tot);
    res += f2(r , s-1 , p)* ((r*s)/tot);
    res += f2(r, s, p-1) * ((s*p)/tot);
    
    return dp[r][s][p] = res; 
}
void set_dp()
{
    for(int i=0;i<105;i++)
    {
        for(int j=0;j<105;j++)
        {
            for(int k=0;k<105;k++)
            {
                dp[i][j][k] = -1.0;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int r,s,p;
        cin>>r>>s>>p;
        set_dp();
        double ans1 = f1(r,s,p);
        set_dp();
        double ans2 = f2(r,s,p);
        set_dp(); 
        double ans3 = f3(r,s,p);

        cout<<fixed<<setprecision(9)<<ans1<<" "<<ans2<<" "<<ans3<<endl;
    }

}