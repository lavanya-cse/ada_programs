#include<stdio.h>

int binary_sqrt(int n);

int main()
{
	int n,res;
	printf("enter the no\n");
	scanf("%d",&n);
	res=binary_sqrt(n);
	printf("the square root of the no. is:%d\n",res);
}

int binary_sqrt(int n)
{
	int result;
	int low=0;
	int high=n;
	while(low<=high)
	{
		int mid=(high+low)/2;
		if(mid*mid==n)
		{
			return mid;
		}
		if(mid*mid<n)
		{
			low=mid+1;
			result=mid;
		}
		else
			high=mid-1;
	}
	return result;
}
