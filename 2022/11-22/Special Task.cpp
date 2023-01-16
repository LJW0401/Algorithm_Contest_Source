#include<stdio.h>
#include<string.h>
int main()
{
	char s[100005];
	scanf("%s",s);
	int counter[10],ext = 0,len = strlen(s),cnt = 0;
	memset(counter,0,sizeof counter);
	for(int i=0; i<len; i++)
		if(s[i]=='?'&&i>0)
			ext++;
	else if(s[i]>='A'&&s[i]<='J')
		counter[s[i]-65]++;
	int ans = 1;
	for(int i=0; i<10; i++)
		if(counter[i])
			cnt++;
	if(cnt)
		if(s[0]>='A'&&s[0]<='J')
			ans = 9;
	else
		ans = 10;
	for(int i=1; i<cnt; i++)
		ans *= (10-i);
	if(s[0]=='?')
		ans *= 9;
	printf("%d",ans);
	for(int i=0; i<ext; i++)
		printf("0");
	printf("\n");
}
