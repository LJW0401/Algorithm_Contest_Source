#include<iostream>
using namespace std;

int main(){
	int n,t;
	int now=1,step,cnt=1;
	cin>>n>>t;
	while(now<t){
		cin>>step;
		now+=step;
		cnt++;
		while(cnt<now){
			cin>>step;
			cnt++;
		}
	}
	if(now==t)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
