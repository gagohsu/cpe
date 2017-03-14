#include<iostream>
#include<string>
using namespace std;
int main(){
    string s,t;
    while(cin>>s>>t)
    {
    	int d=0;
    	for(int i=0;i<t.length();i++)
    	{
    		if(t[i]==s[d])
    		{
    		d++;
    		}
    	}
    	if(d==s.length())cout<<"Yes"<<endl;
    	else cout<<"No"<<endl;
    }
    return 0;
}
