#include<stdio.h>
#include<string.h>
int main(){
	int n;
	char s[105];
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++){
		gets(s);
		if (strlen(s)>10){
			printf("%c%d%c\n",s[0],strlen(s)-2,s[strlen(s)-1]);
		}else{
			puts(s);
		}
	}
	return 0;
}
