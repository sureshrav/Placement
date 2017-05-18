#include<iostream>
#include<stack>
using namespace std;
typedef long long int ll;
int main()
{
	ll s1=0,s2=0,s3=0,n1,n2,n3;
	stack<ll> a,b,c,temp;
	cin>>n1>>n2>>n3;
	while(n1--)
	{
		ll x;
		cin>>x;
		s1+=x;
		temp.push(x);
	}
	while(!temp.empty())
	{
		a.push(temp.top());
		temp.pop();
	}
	while(n2--)
	{
		ll x;
		cin>>x;
		s2+=x;
		temp.push(x);
	}
	while(!temp.empty())
	{
		b.push(temp.top());
		temp.pop();
	}
	while(n3--)
	{
		ll x;
		cin>>x;
		s3+=x;
		temp.push(x);
	}
	while(!temp.empty())
	{
		c.push(temp.top());
		temp.pop();
	}
	ll ans;
	while(1)
	{
		if(a.empty() || b.empty() || c.empty())
		{
			ans=0;
			break;
		}
		if(s1==s2 && s2 ==s3)
		{
			ans=s1;
			break;
		}	
		else
		{
			if(s1 >= s2 && s1 >=s3)
			{
				s1=s1-a.top();
				a.pop();
			}
			else if(s2 >= s1 && s2 >=s3)
			{
				s2=s2-b.top();
				b.pop();
			}
			else if(s3>=s2 && s3>=s1)
			{
				s3=s3-c.top();
				c.pop();
			}
		}
	}
	cout<<ans<<endl;
	return 0;

}