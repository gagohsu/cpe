#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
    while(cin>>s)
    {
		int t=0;
    	for(int i = 0 ; i<s.length()-1;i++)
    	{
    		t=(t*2+(s[i]-'0'))%131071;
    	}
    	if(t)cout<<"NO"<<endl;
    	else cout<<"YES"<<endl;
    }
    return 0;
}
