#include<iostream>
#include<stack>
using namespace std;
long long int n,t,x,temp,front;
int main()
{
	stack<long long int> in,out;
	cin>>n;
	while(n--)
	{
		cin>>t;
		if(t==1)
		{
			cin>>x;
			in.push(x);
		}
		else if(t==2)
		{
			if(out.size()==0)
			{
				while(!in.empty())
				{
					out.push(in.top());
					in.pop();
				}
			}
			out.pop();
		}
		else 
		{
			
			if(out.size()==0)
			{
				while(!in.empty())
				{
					out.push(in.top());
					in.pop();
				}
			}
			cout<<out.top()<<endl;
			
		}
	}
	return 0;

}
