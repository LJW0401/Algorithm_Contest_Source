#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	long long a,b,x,y;
	cin>>t;
	while(t--){
		cin>>x>>y>>a>>b;
		cout<<min((x+y)*a,min(x,y)*b+abs(x-y)*a)<<"\n";
	}
	return 0;
}
