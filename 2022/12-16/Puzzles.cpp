//通过比较差距的绝对值来进行一个排序

#include<stdio.h>
#include<math.h>
int find (int a[],int n,int m){
	int k=0;
	for(int i=1;i<m-1;i++){
		if(abs(a[k]-a[k+1])>abs(a[i]-a[i+1])){
			k=i;
		}
	}
	printf("\n%d %d\n",k,k+1);//显示lr位置
	int l=k,r=k+1;//有点类似于中心扩展法
	while(r-l+1<n){
		if(r<m-1 && abs(a[r+1]-a[r])<=abs(a[l]-a[l-1])){
			r++;
		}else if(l>1 && abs(a[r+1]-a[r])>=abs(a[l]-a[l-1])){
			l--;
		}else if(l==0){
			r++;
		}else if(r==m-1){
			l--;
		}
		printf("\n%d %d\n",l,r);//显示lr位置
	}
	return a[r]-a[l];
}
int main(){
	int n,m,delta,a[60];
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++){
		scanf("%d",&a[i]);
		int j=i;
		while(j>0 && a[j]<a[j-1]){
			int t=a[j];a[j]=a[j-1];a[j-1]=t;
			j--;
		}
	}
	
//	for(int i=0;i<m;i++){//显示排序效果
//		printf("%d ",a[i]);
//	}printf("\n");
	
	delta=a[0+n-1]-a[0];
	
	for(int i=1;i<m-n+1;i++){
		if(a[i+n-1]-a[i]<delta){
			delta=a[i+n-1]-a[i];
		}
	}
	
	printf("%d",delta);
	return 0;
}
/*
5 10
100 1 2 3 3 3 3 3 3 4
>>>0
 */
