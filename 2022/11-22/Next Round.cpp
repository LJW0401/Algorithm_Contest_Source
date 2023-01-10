#include<stdio.h>
int main(){
	int n,k,i,t,mid;
	scanf("%d%d",&n,&k);
	for (i=1;i<=n;i++){
		scanf("%d",&t);
		if (i==k) mid=t;
		if ((i>k && t<mid) || t==0) break;
	}
	printf("%d",i-1);
	return 0;
}
