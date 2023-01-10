#include<stdio.h>
void sort(int a[],int n){
	for(int i=0;i<n-1;i++){
		int k=i;
		for(int j=i+1;j<n;j++){
			if(a[k]>a[j]){
				k=j;
			}
		}
		if(k!=i){
			int t=a[k];a[k]=a[i];a[i]=t;
		}
	}
}
void show(int a[],int n){
	printf("%d",a[0]);
	for(int i=1;i<n;i++){
		printf(" %d",a[i]);
	}
}
int main(){
	int n;
	int a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,n);
	show(a,n);
	return 0;
}
