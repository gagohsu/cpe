#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	while(cin>>s)
	{
		if(s==".")break;
		string tmp;
		int id=0;
		while(true)
		{
			tmp+=s[id];
			id++;
			if(s.length()%tmp.length()!=0)continue;
			string tmp2="";
			for(int i = 0 ; i <s.length()/tmp.length();i++)
				tmp2+=tmp;
			if(tmp2==s)break;
			
		}
		cout<<s.length()/tmp.length()<<endl;
	}
    return 0;
}
