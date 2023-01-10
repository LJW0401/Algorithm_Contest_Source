#include<stdio.h>
#include<string.h>
int main (){
	char s[110];
	int con=1;
	gets(s);
	for(int i=1;i<strlen(s);i++){
		if(s[i]==s[i-1]){
			con++;
		}else{
			con=1;
		}
		if (con>=7) {printf("YES");return 0;}
	}
	printf("NO");
	return 0;
}
