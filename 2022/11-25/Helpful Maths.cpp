#include<stdio.h>
int main(){
	int num[110];
	int i=0,j,t;
	while((num[i]=getchar())!='\n'){
		if('0'<=num[i]&&num[i]<='9'){
			num[i]-='0';
			j=i;
			while(j>0 && num[j-1]>num[j]){
				t=num[j];num[j]=num[j-1];num[j-1]=t;
				j--;
			}
			i++;
		}
	}
	printf("%d",num[0]);
	for(j=1;j<i;j++){
		printf("+%d",num[j]);
	}
	return 0;
}
