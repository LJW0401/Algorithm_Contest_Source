#include<stdio.h>
#include<string.h>
int change(char *p){
	if('a'<=*p&&*p<='z'){
		(*p)-=32;
	}else if('A'<=*p&&*p<='Z'){
		(*p)+=32;
	}
	return 0;
}
int main(){
	char s[150];
	gets(s);
	for(int i=0;i<strlen(s);i++){
		if(i>0 && ('a'<=s[i]&&s[i]<='z')){
			puts(s);return 0;
		}
	}
	for(int i=0;i<strlen(s);i++){
		change(&s[i]);
	}
	puts(s);
	return 0;
}
