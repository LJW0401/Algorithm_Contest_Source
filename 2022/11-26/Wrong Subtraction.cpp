#include<stdio.h>
int main()
{
	long n,k;
	scanf("%ld%ld",&n,&k);
	for(int i=0;i<k;i++){
		if (n%10==0) n/=10;
		else n-=1;
	}
	printf("%ld",n);
	return 0;
}
