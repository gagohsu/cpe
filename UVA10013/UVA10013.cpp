#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a,b,c,d,curry=0;cin>>a;
    while(a--)
    {
    	cin>>b;
    	vector <int> data1,data2,output;
    	while(b--)
    	{
    		cin>>c>>d;
    		data1.push_back(c);
    		data2.push_back(d);
    	}
    	for(int i=data1.size()-1;i>=0;i--)
    	{
    		
    		output.push_back((data1[i]+data2[i]+curry)%10);
    		curry=(data1[i]+data2[i]+curry)/10;
    	}	
    	if(curry)cout<<curry;
    	for(int i=output.size()-1;i>=0;i--)
    	{
    		cout<<output[i];
    	}
    	cout<<endl;
    	if(a>0)cout<<endl;
    }
    return 0;
}
