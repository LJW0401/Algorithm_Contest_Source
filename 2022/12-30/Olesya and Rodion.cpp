#include<iostream>
using namespace std;

int main(){
	int n,t;
	cin>>n>>t;
	if(n*10-1<t){
		cout<<-1;return 0;
	}
	cout<<t;t==10?n--:n;
	while(--n)
		cout<<0;
	return 0;
}
