#include<stdio.h>
#include<string.h>
int main(){
	char s[22];
	int cnt=0;
	gets(s);
	if (s[0])
	for(int i=0;i<strlen(s);i++){
		if(s[i]=='4' || s[i]=='7'){
			cnt++;
		}
	}
	
	if(cnt==4||cnt==7){
		printf("YES");
	}else{
		printf("NO");
	}
	
	return 0;
}
