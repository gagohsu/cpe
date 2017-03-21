#include<iostream>
using namespace std;
int main(){
    int a;
    long long data[51];
    data[1]=1;
    data[2]=2;
    for(int i = 3 ; i < 51;i++)
    {
    	data[i]=data[i-1]+data[i-2];
    }
    while(cin>>a)
    {
  		if(a==0)break;
  		cout<<data[a]<<endl;
    }
    return 0;
}
