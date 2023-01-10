#include<stdio.h>
char *str[3]={"I hate ","that ","I love "};
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		if(i%2==0){
			printf("%s",str[0]);
		}else{
			printf("%s",str[2]);
		}
		if(n>1&&i<n-1){
			printf("%s",str[1]);
		}
	}
	printf("it");
	return 0;
}
