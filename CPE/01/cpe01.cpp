#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    int a;
    string b;
    cin>>a;
    getline(cin,b);
    while(a--)
    {
    	vector<int> data1;
    	vector<string> data2;
    	string c,d;
    
    	getline(cin,b);
    	getline(cin,c);
    	getline(cin,d);
    	
    	stringstream ss;
    	ss<<c;
    	int tmp;
    	while(ss>>tmp)
    	{
    		data1.push_back(tmp);
    	}
    	stringstream ss1;
    	
    	ss1<<d;
    	string str;
    	while(ss1>>str)
    	{
    		data2.push_back(str);
    	}
    	for(int i =1 ; i<=data2.size();i++)
    	{
    		for(int j =0 ; j<data1.size();j++)
    		{
    			if(i == data1[j])
    			{
    				cout<<data2[j]<<endl;
    				break;
    			}
    		}
    	}
    	if(a>0)cout<<endl;
    
    }
    return 0;
}