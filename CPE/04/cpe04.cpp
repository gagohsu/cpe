#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    long long a,b;
    cin>>b;
    while(b--)
    {
    	cin>>a;
    	if(a<=1)cout<<a<<endl;
    	else{
    	string t = "" ;
    	for(int i = 9 ; i >1;)
    	{
    		if(a%i==0){
    		stringstream ss;
    		ss<<i;
    		string tmp;
    		ss>>tmp;
    		t=tmp+t;
    		
    		a/=i;}
    		else i--;
    	}
    	if(a!=1)cout<<-1<<endl;
    	else cout<<t<<endl;
		}    
    }
    return 0;
}

