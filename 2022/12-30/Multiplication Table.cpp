#include<bits/stdc++.h>
using namespace std;

int main(){
	long n,x;
	long sum=0;
	cin>>n>>x;
	for(long i=1;i<=n;i++){
		if(x%i==0 && x/i<=n){
			sum++;
		}
	}
	cout<<sum<<endl;
	return 0;
}
