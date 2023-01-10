#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int len,sum1=0,sum=0,count=0;
	scanf("%d",&len);
	int arr[len];
	for(int i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<len;i++)//维护升序
	{
		for(int j=i+1;j<len;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0;i<len;i++)
	{
		sum+=arr[i];
	}
	for(int j=len-1;j>=0;j--)
	{
		sum1+=arr[j];
		count++;
		if(sum1>sum/2)
			break;
	}
	printf("%d",count);
	return 0;
}
