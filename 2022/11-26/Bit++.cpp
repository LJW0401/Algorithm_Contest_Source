#include<stdio.h>
int main()
{
	int n;
	char s[4];
	long x;
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++){
		gets(s);
		if (s[0]=='+' || s[2]=='+')
			x++;
		else if(s[0]=='-' || s[2]=='-')
			x--;
	}
	printf("%ld",x);
	return 0;
}
