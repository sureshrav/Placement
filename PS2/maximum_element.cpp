#include<iostream>
#include<stack>
#include<utility>
using namespace std;
typedef long long int ll; 
long long int n,x,e;
int main()
{
	stack<pair<ll,ll> > mx,ele;
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		cin>>x;
		if(x==1)
		{
			cin>>e;
			pair<ll,ll> temp=make_pair(e,i);

			ele.push(temp);
			if(mx.size()==0)
			{
				mx.push(temp);
			}
			else
			{
				pair<ll,ll> t=mx.top();
				if(t.first < e)
				{
					mx.push(temp);
				}
			}	
		}
		else if(x==2)
		{
			pair<ll,ll> t1=ele.top();
			pair<ll,ll> t2=mx.top();
			ele.pop();
			if(t1.first==t2.first && t1.second==t2.second)
			{
				
				mx.pop();
			}
		
		}
		else
		{
			pair<ll,ll> t1=mx.top();
			cout<<t1.first<<endl;
		}
	}
	return 0;
}