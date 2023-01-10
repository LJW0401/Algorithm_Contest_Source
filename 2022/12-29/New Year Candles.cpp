#include<iostream>
using namespace std;

int main(){
	int a,b,sum=0,left=0;
	int tmp;
	cin>>a>>b;
	while(a>0){
		sum+=a;
		tmp=a;
		a=(a+left)/b;
		left=left+tmp-a*b;
	}
	cout<<sum<<endl;
	return 0;
}
