#include<iostream>
using namespace std;

int main(){
	int f[]={1,8,4,2,6};
	long n;
	cin>>n;
	cout<<f[(n-1)%4+1]<<endl;
	return 0;
}
