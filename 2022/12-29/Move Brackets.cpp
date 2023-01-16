#include<iostream>
using namespace std;

int main(){
	int n,m;
	string s;
	cin>>n;
	while(n--){
		cin>>m;
		cin>>s;
		int pos=s.find("()");
		while(pos>=0){
			s.erase(s.begin()+s.find("()"),s.begin()+s.find("()")+2);
			pos=s.find("()");
		}
		cout<<(s.size()/2)<<endl;
	}
	return 0;
}
