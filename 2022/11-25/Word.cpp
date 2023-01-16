#include<stdio.h>
#include<string.h>
int main(){
	char s[110];
	int a=0,b=0;
	gets(s);
	for(int i=0;i<strlen(s);i++){
		if(s[i]-'a'>=0) a++;
		else b++;
	}
//	for(int i=0;i<strlen(s);i++){
//		if(a>b) a++;
//		else b++;
//	}
	a>=b?strlwr(s):strupr(s);
	puts(s);
	return 0;
}
