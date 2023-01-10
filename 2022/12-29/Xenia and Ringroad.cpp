#include<iostream>
using namespace std;
int main()
{
	int n,m,p=1,x;
	long long r=0;
	cin>>n>>m;
	while(m--)
	{
		cin>>x;
		r+=(x-p+n)%n;
		p=x;
	}
	cout<<r;
	return 0;
}
