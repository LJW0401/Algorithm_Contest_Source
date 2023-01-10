#include<stdio.h>
int main(){
	int a,b,c;
	long s=0;
	scanf("%d%d%d",&a,&b,&c);
	s=a+b+c;
	if(a*b*c>s){
		s=a*b*c;
	}
	if(a*(b+c)>s){
		s=a*(b+c);
	}
	if((a+b)*c>s){
		s=(a+b)*c;
	}
	if(a*b+c>s){
		s=a*b+c;
	}
	if(a+b*c>s){
		s=a+b*c;
	}
	printf("%ld",s);
	return 0;
}
