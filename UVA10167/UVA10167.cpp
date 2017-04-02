#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a,b;
    while(cin>>a)
    {
    	if(a==0)break;
    	vector <int> px,py;
    	int n = 2*a;
    	while(n--)
    	{
    		int t,s;
    		cin>>t>>s;
    		px.push_back(t);
    		py.push_back(s);
    	}
    	int c=0,d=0;
   		for(int i = -500; i<=500;i++)
   		{
   			for(int j = -500; j<=500;j++)
   			{
   				c=0,d=0;
   				bool ts=true;
   				for(int k = 0 ; k < px.size();k++)
		    	{
		    		int tmp;
		    		tmp=i*px[k]+j*py[k];
		    		if(tmp==0){ts=false;break;}
		    		if(tmp>0)c++;
		    		else d++;
		    	}
		    	if(c==d&&ts){cout<<i<<' '<<j<<endl; break;}
   			}
   			if(c==d){ break;}
   		}
    }
    return 0;
}
