#include<stdio.h>
int main(){
	long  n,m,a;
	scanf("%ld%ld%ld",&n,&m,&a);
	printf("%lld",(--n/a+1ll)*(--m/a+1));
	return 0;
}
