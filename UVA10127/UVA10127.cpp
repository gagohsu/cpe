#include<iostream>
using namespace std;
int main(){
    int input;
    
    while(cin>>input)
    {
    int t=1;
    int tmp=1;
    while(tmp&&input!=1)
    {
    	tmp=((tmp*10)+1)%input;
    	t++;
    }
    cout<<t<<endl;
    }
    return 0;
}
