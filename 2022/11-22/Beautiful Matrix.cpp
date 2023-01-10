#include<stdio.h>
#include<math.h>
int main(){
	int m,n,t;
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			scanf("%d",&t);
			if (t==1) {m=i;n=j;break;}
		}
	}
	printf("%d",abs(m-3)+abs(n-3));
	return 0;
}
