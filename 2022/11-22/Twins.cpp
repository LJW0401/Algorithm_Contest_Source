#include<stdio.h>
void output(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n\n");
}
int main(){
	int n,sign,t,j;
	int coins[110];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
//		if (i%2==0) sign=1;
//		else sign=-1;
		j=i;
		sign=1;
		scanf("%d",&coins[i]);
		while(j>0&&(coins[j-1]*sign > coins[j]*sign)){
			sign*=-1;
			t=coins[j];coins[j]=coins[j-1];coins[j-1]=t;
			j--;
		}
		output(coins,i+1);
	}
	output(coins,n);
	return 0;
}
/*
10
10 9 8 7 6 5 4 3 2 1
 */

