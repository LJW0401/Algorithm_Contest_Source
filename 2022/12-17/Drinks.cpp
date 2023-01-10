#include<stdio.h>

int main(){
	int n;
	int a[110];
	double ave=0.0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		ave+=a[i];
	}
	ave=ave/n;
	printf("%lf",ave);
	return 0;
}
