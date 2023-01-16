/*
求最长非递减字串
1.暴力匹配
 */

#include<stdio.h>
int main(){
	long n;
	long p=0,q;
	long maxlen=0,len=0;
	scanf("%ld",&n);
	for(int i=0;i<n;i++){
		scanf("%ld",&q);
		if(q>=p){
			len++;
		}else{
			if(len>maxlen){
				maxlen=len;
			}
			len=1;
		}
		p=q;
	}
	if(len>maxlen){
		maxlen=len;
	}
	printf("%ld",maxlen);
	return 0;
}
