#include<stdio.h>
int main(){
	int n,t;
	int cnt,done=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		cnt=0;
		for(int j=0;j<3;j++){
			scanf("%d",&t);
			cnt+=t;
		}
		if (cnt>1){
			done++;
		}
	}
	printf("%d",done);
	return 0;
}
