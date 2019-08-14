#include<stdio.h>

int binary(int a[],int k,int n,int low,int high);

int main()
{
	int a[100],k,low,high,n,i;
	printf("enter the size\n");
	scanf("%d",&n);
	printf("enter the element\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the key\n");
	scanf("%d",&k);
	low=0;
	high=n;
	
	binary(a,k,n,low,high);
}

int binary(int a[],int k,int n,int low,int high)
{
	int count=0;
	int sec,i;
	for(i=0;i<n;i++)
	{
		if(low<high)
		{
			int mid=(low+high)/2;
			if(k==a[i])
			{
				if(count==0)
					printf("%d",i);
				count++;
				sec=i;
			}
			else if(a[i]<k)
			{
				high=mid-i;
			}
			else
			{
				low=mid+i;
			}
		}
	}
	if(count==0)
	{
		printf("0 0 -1");
	}
	else
	{
		printf("%d%d\n",sec,count);
	}
	return 0;
}
