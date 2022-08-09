#include<bits/stdc++.h>
using namespace std;
struct box
{
    int l;
    int b;
    int h;
}box[100005];
int dp[100005+1][3] = {-1};
int solve(int idx , int orient , int n)
{
    if(dp[idx][orient] != -1)
        return dp[idx][orient];
    
    int res = 0;
    int prev_l,prev_w,prev_h;
    if(orient == 0)
    {
        prev_l = box[idx].l;
        prev_w = box[idx].b;
        prev_h = box[idx].h;
    }
    else if(orient == 1)
    {
        prev_l = box[idx].l;
        prev_w = box[idx].h;
        prev_h = box[idx].b;
    }
    else
    {
        prev_l = box[idx].b;
        prev_w = box[idx].h;
        prev_h = box[idx].l;
    }
    for(int i=1;i<=n;i++)
    {
        if((box[i].l < prev_l && box[i].b < prev_w) || box[i].b < prev_l && box[i].l < prev_w)
        {
            res = max(res , box[i].h + solve(i , 0 , n));
        }
        if((box[i].b < prev_l && box[i].h < prev_w) || box[i].h < prev_l && box[i].b < prev_w)
        {
            res = max(res , box[i].l + solve(i , 0 , n));
        }
        if((box[i].h < prev_l && box[i].l < prev_w) || box[i].l < prev_l && box[i].h < prev_w)
        {
            res = max(res , box[i].b + solve(i , 0 , n));
        }
    }
    return dp[idx][orient] = res;

}
int main()
{
    int n;
    cin>>n;
    // struct box[n];
    for(int i=1;i<=n;i++)
    {
        int a,bi,c;
        cin>>a>>bi>>c;
        box[i].l = a;
        box[i].b = bi;
        box[i].h = c;

    }
    box[0].l = 1e9;
    box[0].b = 1e9;
    box[0].h = 1e9;

    

    cout<<solve(0 , 0 , n)<<endl;

}