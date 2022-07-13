#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,k;
const int mod = 1e6+3;
ll dp[32][32][32];
vector<int>v[11];
void process()
{
	for(int i=0;i<=1024;i++)
	{
		int no = i;
		int ones = 0;

		while(no)
		{
			if(no&1) 
                ones++; 
            
			no >>= 1;
		}

		v[ones].push_back(i);
	}
}

int main()
{

    process();
    string a,b,c;
    cin>>a>>b>>c;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;

    for(int i=0;i<a.size();i++)
    {
        if(a[i] == '1')
            count1++;
    }
    for(int i=0;i<b.size();i++)
    {
        if(b[i] == '1')
            count2++;
    }
    for(int i=0;i<c.size();i++)
    {
        if(c[i] == '1')
            count3++;
    }
    // for(int i=0;i<10;i++)
    // {
    //     for(auto it : v[i])
    //     {
    //         cout<<it<<" ";
    //     }
    //     cout<<endl;
    // }
    int ans = 0;

	for( int i = 0; i < v[count1].size(); i++)
	{
		for( int j = 0; j < v[count2].size(); j++)
		{
			for( int k = 0; k < v[count3].size(); k++)
			{
				int pehla = v[count1][i];
				int dusra = v[count2][j];
				int tisra = v[count3][k];
				
				int XOR = pehla^dusra^tisra; 
				ans = max( ans , XOR);
			}
		}
	}
	dp[count1][count2][count3] = ans; 
    vector<int>tmp;
	while(ans)
	{
		tmp.push_back(ans&1);
		ans >>= 1;
	}

	reverse(tmp.begin() , tmp.end());
	while(tmp.size() < 10 ) 
        tmp.push_back(0);

	for(auto j : tmp ) 
        cout << j;
	cout << endl;
}