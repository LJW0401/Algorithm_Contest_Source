#include<stdio.h>
int main(){
	int n;
	int x=0,y=0,z=0;
	int a,b,c;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d%d",&a,&b,&c);
		x+=a;y+=b;z+=c;
	}
	if(x==0 && y==0 && z==0)
		printf("YES");
	else
		printf("NO");
	return 0;
}
