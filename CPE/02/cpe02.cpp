#include<iostream>
#include<vector>
#include<Algorithm>
using namespace std;
int main(){
    int a,b;
    while(cin>>a)
    {
    	int tmp;
    	cin>>tmp;
    	vector<int> data;
    	for(int i = 1; i<a;i++)
    	{
    		int d;
    		cin>>b;
    		d = b>tmp?b-tmp:tmp-b;
    		data.push_back(d);
    		tmp =b;
    	}
    	bool t =true;
    	sort(data.begin(),data.end());
    	for(int i = 1 ; i <= data.size();i++)
    	{
    		if(i != data[i-1])
    		{
    			t= false ;
    			break;
    		}
    	}
    	if(t)cout<<"Jolly"<<endl;
    	else cout<<"Not jolly"<<endl;
    }
    
    return 0;
}


