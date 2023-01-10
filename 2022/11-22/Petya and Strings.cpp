#include<stdio.h>
#include<string.h>
int main(){
	char s1[110],s2[110];
	gets(s1);
	gets(s2);
	for(int i=0;i<strlen(s1);i++){
		if ('a'<=s1[i]&&s1[i]<='z') {s1[i]-=32;}
		if ('a'<=s2[i]&&s2[i]<='z') {s2[i]-=32;}
		
		if (s1[i]-s2[i]>0) {printf("1");return 0;}
		else if (s1[i]-s2[i]<0) {printf("-1");return 0;}
	}
//	puts(s1);puts(s2);
	printf("0");
	return 0;
}
