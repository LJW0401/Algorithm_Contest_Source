#include<stdio.h>
#include<string.h>
void XOR(char a[],char b[],int n,char c[]){
	for(int i=0;i<n;i++){
		if(a[i]==b[i]){
			c[i]='0';
		}else{
			c[i]='1';
		}
	}
	c[n]='\0';
}

int main(){
	char a[101],b[101],c[101];
	gets(a);gets(b);
	XOR(a,b,strlen(a),c);
	puts(c);
	return 0;
}
