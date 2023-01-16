#include<stdio.h>

int main(){
	int k,n,w;
	long borrow;
	scanf("%d%d%d",&k,&n,&w);
	borrow=(1+w)*w*k/2-n;
	borrow>0?printf("%ld",borrow):printf("0");
	return 0;
}
