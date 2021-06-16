#include<iostream>
using namespace std;
int main()
{
    int g[100][100];
    for(int i=1;i<=3;i++)
    for(int j=1;j<=3;j++)
    cin>>g[i][j];
            g[2][2]=(g[1][2]+g[1][3]+g[3][2]+g[3][1])/4;
    for(int i=1;i<=100000;i++){
            if(g[2][1]+g[2][2]+g[2][3]==g[1][2]+i+g[1][3])g[1][1]=i;
}        
for(int i=1;i<=100000;i++){
        if(g[1][1]+i==g[1][3]+g[3][1])g[3][3]=i;
        }
    for(int i=1;i<=3;i++){
    for(int j=1;j<=3;j++){
    cout<<g[i][j]<<" ";}cout<<endl;} 
    return 0;
}