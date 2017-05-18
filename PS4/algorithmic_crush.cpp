#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
long long int a[10000010]={0};

int main()
{
	long long int n,m,i,j,k,max,mn,x,y,v;
	cin>>n>>m;
	
//	memset(a,0,sizeof(long long int)*());
	for(i=0;i<m;i++)
	{
		cin>>x>>y>>v;
		a[x]+=v;
		a[y+1]-=v;
	}
	

	max=0;
	mn=0;
	for(i=1;i<=n;i++)
	{
		mn+=a[i];
		if(max<mn)
		{
			max=mn;
		}
	}
	cout<<max<<endl;
	return 0;
}