#include<iostream>
using namespace std;
int main(){
    int w,h,a,b,c;
   	while(cin>>w>>h)
   	{
   		if(w==0&&h==0)break;
   		int data[200][200];
   		for(int i = 0; i <=w; i++)
   		{
   			for(int j = 0; j <= h;  j++)
   			{
   				data[i][j]=0;
   			}
   		}
   		cin>>a;
   		while(a--)
   		{
   			cin>>b>>c;
   			data[b][c]=-1;
   		}
   		for(int i = 0; i <=w; i++)
   		{
   			for(int j = 0; j <= h;  j++)
   			{
   				if(i==0&&j==0)data[i][j]=1;
   				else if(data[i][j]==-1)data[i][j]=0;
   				else if(i==0)data[i][j]=data[i][j-1];
   				else if(j==0)data[i][j]=data[i-1][j];
   				else data[i][j]=data[i-1][j]+data[i][j-1];
   			}
   		}
   		if(data[w][h]==0)cout<<"There is no path."<<endl;
   		else if(data[w][h]==1)cout<<"There is one path from Little Red Riding Hood's house to her grandmother's house."<<endl;
   		else cout<<"There are "<<data[w][h]<<" paths from Little Red Riding Hood's house to her grandmother's house."<<endl;
   	}
    return 0;
}
