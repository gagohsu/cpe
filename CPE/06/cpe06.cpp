#include<iostream>
#include<vector>
#include<regex>

using namespace std;
int main(){
	regex reg("\\(([0-9]*),([LR]*)\\)");
   	string a;
   	vector<string> data,data1;
   	while(cin>>a)
   	{
   		
   		if(a!="()")
   		{
   			smatch sm;
   			if( regex_match(a, sm, reg) ){
		   	data1.push_back(sm[1]);
		    data.push_back(sm[2]);
		  }
   		
   		}
   		else{
   			vector<string> output,output1;
   			output.push_back("");
   			
   			for(int i =0 ; i < output.size();i++)
   			{
   				for(int j = 0 ;j<data.size();j++)
   				{
   					if(output[i]==data[j])
   					{
   						output1.push_back(data1[j]);
   						output.push_back(output[i]+"L");
   						output.push_back(output[i]+"R");
   						break;
   					}
   					
   				
   				}   			
   			   			
   			}
   			if(output1.size()==data1.size())
   			{
	   			for(int i =0 ; i < output1.size();i++)
	   			{
	   				
					cout<<output1[i];
					if(i<output1.size()-1)cout<<" ";
	   			}
	   			cout<<endl;
   			}
   			else{
   			
   				cout<<"not complete"<<endl;
   			}
   			data.clear();
   			data1.clear();
   		}
   	}
    return 0;
}







