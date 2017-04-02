#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int gcd(int m , int n)
{
	if(n==0)return m;
	else return gcd(n,m%n);
}
int main(){
    int a,b;
    vector<int> data;
    while(cin>>a)
    {
    	if(a!=0)data.push_back(a);
    	else if(data.size()==0&&a==0)break;
    	else
    	{
    	sort(data.begin(),data.end());
    	int min =data[data.size()-1],tmp;
    		for(int i =1 ; i <data.size()-1;i++)
    		{
    			tmp=gcd(data[i+1]-data[0],data[i]-data[0]);
    			if(tmp<min)min=tmp;
    		}
    		cout<<min<<endl;
    	    data.clear();
    	}
    }
    return 0;
}