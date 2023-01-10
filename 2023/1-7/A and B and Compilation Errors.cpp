#include<bits/stdc++.h>
using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);std::cout.tie(0);
	vector<int>errors1;
	vector<int>errors2;
	vector<int>errors3;
	int n;
	cin>>n;
	for(int _=0;_<n;_++){
		int tmp;cin>>tmp;
		errors1.push_back(tmp);
	}
	sort(errors1.begin(),errors1.end());
	for(int _=0;_<n-1;_++){
		int tmp;cin>>tmp;
		errors2.push_back(tmp);
	}
	sort(errors2.begin(),errors2.end());
	for(int _=0;_<n-2;_++){
		int tmp;cin>>tmp;
		errors3.push_back(tmp);
	}
	sort(errors3.begin(),errors3.end());
	
	int l=0,r=n-1;
	while(l<=r){
		int m=(l+r)/2;
		if(errors1[m]==errors2[m])
			l=m+1;
		else
			r=m-1;
	}
	cout<<errors1[l]<<endl;
	
	l=0,r=n-1;
	while(l<=r){
		int m=(l+r)/2;
		if(errors3[m]==errors2[m])
			l=m+1;
		else
			r=m-1;
	}
	cout<<errors2[l]<<endl;
	return 0;
}

/*
5
5 4 3 2 1
4 3 2 1
3 2 1
 */


