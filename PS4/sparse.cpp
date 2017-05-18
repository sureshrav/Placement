#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q;
    string s;
    string a="";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        a+="_"+s;
    }
    a+="_";
    // cout<<a<<endl;
  
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>s;
        s="_"+s+"_";
        int ans=0;
        int pos=a.find(s,0);

        while(pos!=-1)
        {
            ++ans;
            // cout<<pos<<endl;
            // cout<<ans<<endl;
            pos=a.find(s,pos+1);
        }
        cout<<ans<<endl;
        
    }
    return 0;
}