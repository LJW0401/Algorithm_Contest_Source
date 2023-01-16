#include<bits/stdc++.h>
using namespace std;

long Find(vector<long> prices,long coins){
	long l=0,r=prices.size()-1;
	while(l<=r){
		long m=(l+r)/2;
		if(prices[m]<=coins)
			l=m+1;
		else
			r=m-1;
	}
	return l;
}

int main(){
	std::ios::sync_with_stdio(false);//有了这两句之后就不能使用printf，scanf
	std::cin.tie(0);
	long n,q,coins,tmp;
	cin>>n;
	vector<long>prices;
	while(n--){
		cin>>tmp;
		prices.push_back(tmp);
	}
	sort(prices.begin(),prices.end());
	cin>>q;
	while(q--){
		cin>>coins;
		cout<<Find(prices,coins)<<endl;
	}
	return 0;
}
