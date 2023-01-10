#include<stdio.h>
int main(){
	int n;
	int a,b;
	long max=0,sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		sum+=(b-a);
		if (sum>max) max=sum;
	}
	printf("%ld",max);
	return 0;
}
