#include<bits/stdc++.h>
using namespace std;

int main(){
	std::ios::sync_with_stdio(false);//解锁
	std::cin.tie(0),cout.tie(0);
	string s;
	cin>>s;
	long n;
	cin>>n;
	while(n--){
		long l,r,res=0;
		cin>>l>>r;
		string s_(s,l-1,r-l+1);
//		cout<<s_<<endl;
		for(long i=0;i<s_.size()-1;i++){
			if(s_[i]==s_[i+1])
				res++;
		}
		cout<<res<<endl;
	}
}
