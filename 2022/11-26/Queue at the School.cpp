#include<stdio.h>
int main()
{
	int n,t;
	char tmp;
	char s[100];
	scanf("%d%d",&n,&t);
	getchar();
	gets(s);
	for(int i=t-1;i>=0;i--){
		for(int j=1;j<n;j++){
			if (s[j-1]<s[j]){tmp=s[j-1];s[j-1]=s[j];s[j]=tmp;}
		}
	}
	puts(s);
	return 0;
}
