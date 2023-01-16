#include<stdio.h>
int main (){
	int n,i,t,j;
	int c[110];
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d",&c[i]);
		j=i;
		while(j>0 && c[j-1]<c[j]){
			t=c[j];c[j]=c[j-1];c[j-1]=t;
			j--;
		}
	}
	
	for(i=0;i<n;i++){
		printf("%d ",c[i]);
	}
	printf("\n\n");
	
	int a=0,b=0;
	i=n-1;
	while(i>1){
		c[0]=c[0]+c[i];i--;a++;
		if(i>1) {c[1]=c[1]+c[i];i--;b++;}
			
		if(c[0]<c[1]){
			t=c[0];c[0]=c[1];c[1]=t;
			t=a;a=b;b=t;
		}
	}
	printf("%d  %d\n",c[0],c[1]);
	printf("%d  %d",a+1,b+1);
	return 0;
}
/*
5
1 2 3 4 5
3 6 6
6 9
2
 */
