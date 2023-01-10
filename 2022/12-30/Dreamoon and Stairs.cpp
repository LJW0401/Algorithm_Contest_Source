#include<iostream>
using namespace std;

int main(){
	int n,m,min;
	cin>>n>>m;
	min=n/2+n%2;//步数范围为[min,n]
	for(int i=min;i<=n;i++){
		if(i%m==0){
			cout<<i<<endl;
			return 0;
		}
	}
	cout<<-1<<endl;
	return 0;
}
