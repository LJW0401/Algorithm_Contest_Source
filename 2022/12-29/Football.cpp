#include<iostream>
using namespace std;

int main(){
	int n,a=0,b=0;
	string fname,sname,name;
	cin>>n;
	while(n--){
		cin>>name;
		if(fname.empty()){
			fname=name;
		}else if(fname!=name&&sname.empty()){
			sname=name;
		}
		if (name==fname)
			a++;
		else
			b++;
	}
	cout<<(a>b?fname:sname)<<endl;
	return 0;
}
