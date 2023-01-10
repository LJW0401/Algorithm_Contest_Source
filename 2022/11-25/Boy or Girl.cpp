#include<stdio.h>
#include<string.h>
int main(){
	int f[256]={0},sum=0;
	char s[110];
	gets(s);
	for(int i=0;i<strlen(s);i++){
		if (!f[s[i]]) {f[s[i]]=1;sum++;}
	}
	sum%2==0?printf("CHAT WITH HER!"):printf("IGNORE HIM!");
	return 0;
}
