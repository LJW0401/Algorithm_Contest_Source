#include<stdio.h>
struct Dragon{
	long s;
	long ds;
};
int main(){
	long s,n;
	struct Dragon Dragons[10010];
	scanf("%ld%ld",&s,&n);
	for(int i=0;i<n;i++){
		scanf("%ld%ld",&Dragons[i].s,&Dragons[i].ds);
		int j=i;
		while(j>0 && Dragons[j].s<Dragons[j-1].s){
			struct Dragon t=Dragons[j];Dragons[j]=Dragons[j-1];Dragons[j-1]=t;
			j--;
		}
	}
	for(int i=0;i<n;i++){
		if(s>Dragons[i].s){
			s+=Dragons[i].ds;
		}else{
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}
