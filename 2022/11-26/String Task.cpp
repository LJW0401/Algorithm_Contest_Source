#include<stdio.h>
#include<string.h>
int main(){
	char c;
	while((c=getchar())!='\n'){
		if (c<'a') c+=32;
		switch (c) {
			case 'a':
			case 'o':
			case 'y':
			case 'e':
			case 'u':
			case 'i':
				continue;
			default:
				printf(".%c",c);
				break;
		}
	}
	return 0;
}
