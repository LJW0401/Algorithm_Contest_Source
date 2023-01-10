#include<stdio.h>
int luck(int x){
	int b,f=1;
	do{
		b=x%10;
		if (b!=4&&b!=7){f=0;break;}
	}while(x/=10);
	return f;
}
int alike(int x){
	int f=0;
	for(int i=4;i<=1000;i++){
		if(luck(i)&&x%i==0){
			f=1;break;
		}
	}
	return f;
}

int main(){
	int x;
	scanf("%d",&x);
	if(luck(x)){
		printf("YES");
	}else if (alike(x)){
		printf("YES");
	}else{
		printf("NO");
	}
	return 0;
}
