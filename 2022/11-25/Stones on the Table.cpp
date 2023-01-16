#include<stdio.h>

int main(){
	int n,m=0;
	char s[100];
	scanf("%d",&n);getchar();
	gets(s);
	for(int i=1;i<n;i++){
		if (s[i]==s[i-1]) m++;
	}
	printf("%d",m);
	return 0;
}
