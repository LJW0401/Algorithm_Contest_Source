#include<stdio.h>
int main(){
	long n,a,d;
	char c;
	scanf("%ld",&n);
	getchar();
	for(int i=0;i<n;i++){
		c=getchar();
		if(c=='A'){
			a++;
		}else{
			d++;
		}
	}
	if(a==d){
		printf("Friendship");
	}else if(a>d){
		printf("Anton");
	}else if(a<d){
		printf("Danik");
	}
	return 0;
}
