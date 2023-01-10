//重点：识别出分隔用的WUB

#include<stdio.h>
int main(){
	int Print_Space=1;
	char c;
	char s[5];
	int i=0;
	while((c=getchar())!='\n'){
		s[i]=c;
		if(c=='W'&&i==0){
			i++;
		}else if(c=='U'&&i==1){
			i++;
		}else if(c=='B'&&i==2){
			i=0;
			if(!Print_Space){
				printf(" ");
				Print_Space=1;
			}
		}else{
			Print_Space=0;
			if(c=='W'){
				for(int j=0;j<i;j++){
					printf("%c",s[j]);
				}
				s[0]='W';
				i=1;
			}else{
				for(int j=0;j<=i;j++){
					printf("%c",s[j]);
				}
				i=0;
			}
		}
	}
	if(i>0){
		for(int j=0;j<i;j++){
			printf("%c",s[j]);
		}
	}
}
//WUBWUCWUWUBWUNWUB
//WUCWU WUN
