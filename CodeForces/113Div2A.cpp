#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    pair<int ,int>p[n];
    for (int i = 0; i < n; i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    for (int i = 0; i < n-1; i++)
    {   
        int min=i;
        for(int j=i+1;j<n;j++)
        {
             if(p[min].first < p[j].first)
             {
                 min=j;
                 swap(p[min].first ,p[i].first);
                 swap(p[min].second , p[i].second);
             }
              if(p[min].first == p[j].first)
             {
                 if(p[min].second < p[j].second)
                 {
                     swap(p[min].second , p[i].second);
                 }
             }
            
        }
       
    }
    
    int count=0;
    int temp=0;
    for (int i = 0; i < n;)
    {   
        int max1=p[i].first,max2=p[i].second;
        if(max1==p[i].first && max2==p[i].second)
        {
            count++;
            temp++;   
        }
        if(k<=count)
            {
                cout<<count<<endl;
            }
            else
            count=0;

            i=i+temp;
    }
    cout<<count<<endl;

    
    

    
}