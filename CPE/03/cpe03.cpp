#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;
int main(){
    string a,b;
    
    while(getline(cin,a))
    {
    	getline(cin,b);
    	vector<int> data1,data2;
    	stringstream ss1,ss2;
    	int tmp;
    	
    	ss1<<a;
    	while(ss1>>tmp)
    	{
    		data1.push_back(tmp);
    	}
    	ss2<<b;
    	while(ss2>>tmp)
    	{
    		data2.push_back(tmp);
    	}
    	sort(data1.begin(),data1.end());	
    	sort(data2.begin(),data2.end());
    	int m =0;
    	for(int i = 0 , j=0 ; i<data1.size()&& j<data2.size();)
    	{
    		if(data1[i]==data2[j])
    		{
    			m++;
    			i++;
    			j++;
    			
    		}
    		else if(data1[i]>data2[j])
    		{
    			j++;
    		}
    		else
    		{
    			i++;
    		}
    	}
    	if(m==0)cout<<"A and B are disjoint"<<endl;
    	else if(m==data1.size()&& m==data2.size())cout<<"A equals B"<<endl;
    	else if(m==data1.size())cout<<"A is a proper subset of B"<<endl;
    	else if(m==data2.size())cout<<"B is a proper subset of A"<<endl;
    	else cout<<"I'm confused!"<<endl;
    }
    
    return 0;
}

