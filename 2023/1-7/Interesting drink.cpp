#include<bits/stdc++.h>
using namespace std;

class Limit {
public:
	long MAX=0;
	bool operator()(int val) {
		return val <= MAX;
	}
};

int main(){
	std::ios::sync_with_stdio(false);//有了这两句之后就不能使用printf，scanf
	std::cin.tie(0);
	long n,q,coins,tmp;
	cin>>n;
	vector<int>prices;
	while(n--){
		cin>>tmp;
		prices.push_back(tmp);
	}
	sort(prices.begin(),prices.end());
	reverse(prices.begin(),prices.end());
	cin>>q;
	while(q--){
		cin>>coins;
//		Limit pra;
//		pra.MAX=coins;
//		cout<<count_if(prices.begin(), prices.end(), pra)<<endl;
	}
	return 0;
}
