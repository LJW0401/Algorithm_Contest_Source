#include<stdio.h>
int main(){
	char s[1010];
	gets(s);
	if ('a'<=s[0]&&s[0]<='z') s[0]-=32;
	puts(s);
	return 0;
}
