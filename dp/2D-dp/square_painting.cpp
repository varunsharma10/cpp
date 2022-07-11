#include<bits/stdc++.h>
using namespace std;
const int N=2005;
int a[N][N],h[N][N],v[N][N],row[N],col[N];
 
int giver(int l,int r){
    if(r<l) return 0;
    return row[r]-row[l-1];
}
 
int givec(int l,int r){
    if(r<l) return 0;
    return col[r]-col[l-1];
}
 
int giveh(int rr,int l,int r){
    if(r<l) return 0;
    return v[rr][r]-v[rr][l-1];
}
 
int givev(int cc,int l,int r){
    if(r<l) return 0;
    return h[r][cc]-h[l-1][cc];
}
 
int main()
{
    int i,j,k,n,m,ans=0,cnt=0,sum=0;
    cin>>n>>k;
    string s[n];
    for(i=0;i<n;i++)
    {
        cin>>s[i];
        for(j=0;j<n;j++)
        {
            a[i+1][j+1]=(s[i][j]=='W'?1:0);
        }        
    }
    for(i=1;i<=n;i++)
    {
        cnt=0;
        for(j=1;j<=n;j++)
        {
            cnt+=a[i][j];
        }        
        row[i]=(cnt==n);
        row[i]+=row[i-1];
    }
    for(i=1;i<=n;i++)
    {
        cnt=0;
        for(j=1;j<=n;j++)
        {
            cnt+=a[j][i];
        }        
        col[i]=(cnt==n);
        col[i]+=col[i-1];
    }
    for(i=1;i<=n;i++)
    {
        int bl=0;
        for(j=1;j<=n;j++)
        {
            bl+=(a[i][j]==0);
        }        
        cnt=0;
        for(j=1;j<=k;j++)
        {
            cnt+=(a[i][j]==0);          
        }
        h[i][1]=(cnt==bl);
        for(j=k+1;j<=n;j++)
        {
            cnt+=(a[i][j]==0);
            cnt-=(a[i][j-k]==0);
            h[i][j-k+1]=(cnt==bl);
        }
    }
    for(j=1;j<=n;j++)
    {
        int bl=0;
        for(i=1;i<=n;i++)
        {
            bl+=(a[i][j]==0);
        }      
        cnt=0;
        for(i=1;i<=k;i++){
            cnt+=(a[i][j]==0);          
        }
        v[1][j]=(cnt==bl);
        for(i=k+1;i<=n;i++)
        {
            cnt+=(a[i][j]==0);
            cnt-=(a[i-k][j]==0);
            v[i-k+1][j]=(cnt==bl);
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            v[i][j]+=v[i][j-1];
        }        
    }
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=n;i++)
        {
            h[i][j]+=h[i-1][j];
        }        
    }
    for(i=1;i+k-1<=n;i++)
    {
        for(j=1;j+k-1<=n;j++)
        {
            int temp=0;
            int st=1,en=i-1;
            temp+=giver(st,en);
            st=i+k;en=n;
            temp+=giver(st,en);
            st=1;en=j-1;
            temp+=givec(st,en);
            st=j+k;en=n;
            temp+=givec(st,en);

            temp+=givev(j,i,i+k-1);
            temp+=giveh(i,j,j+k-1);

            ans=max(ans,temp);
        }        
    }
    cout<<ans;
}