#include<stdio.h>

int main(){
	long n,m=0;
	scanf("%ld",&n);
	m+=n/5;n=n%5;
	m+=n/4;n=n%4;
	m+=n/3;n=n%3;
	m+=n/2;n=n%2;
	m+=n;
	printf("%ld",m);
	return 0;
}
