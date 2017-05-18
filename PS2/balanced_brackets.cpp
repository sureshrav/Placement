#include<iostream>
using namespace std;
#include<stack>
#include<string>
int main()
{
	stack<char> st;
	long long int n;
	cin>>n;
	while(n--)
	{
		
		bool flag=0;
		string s;
		cin>>s;
		for(long long int i=0;s[i];i++)
		{
			if(s[i]=='{' || s[i]=='(' || s[i]=='[')
			{
				st.push(s[i]);
			}
			else
			{
				
				if(st.empty())
				{
					flag=1;
					break;
				}
				char ch=st.top();
				if(s[i]=='}')
				{
					if(ch=='{')
					{
						st.pop();
					}
					else 
					{
						flag=1;
						break;
					}
				}
				else if(s[i]==')')
				{
					if(ch=='(')
					{
						st.pop();
					}
					else 
					{
						flag=1;
						break;
					}
				}
				else 
				{
					if(ch=='[')
					{
						st.pop();
					}
					else 
					{
						flag=1;
						break;
					}
				}

			}

		}
		if(flag ==1 || !st.empty())
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
		while(!st.empty())
		{
			st.pop();
		}
	}
}