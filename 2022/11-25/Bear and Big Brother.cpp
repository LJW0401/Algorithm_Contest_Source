#include<stdio.h>

int main(){
	int x,y,year=0;
	scanf("%d%d",&x,&y);
	while(x<=y){
		x*=3;y*=2;
		year++;
	}
	printf("%d",year);
	return 0;
}
