#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	int temp;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		cin>>temp;
	}
	cout<<(m*(m-1))/2<<endl;
	for(int i=1;i<m;i++)
	{
		for(int j=i+1;j<=m;j++)
		{
			
			if(k==0)
			cout<<i<<" "<<j<<endl;
			else 
			cout<<j<<" "<<i<<endl;
		}
	}
	return 0;
	
	
}
