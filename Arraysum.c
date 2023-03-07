#include<stdio.h>
void main()
{
	int a[10],i,n,sum=0;
	printf("enter the size of an array");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
		printf("enter the a[%d] element=",i);
		scanf("%d",&a[i]);
	}
	printf("array elements are\n");
	for(i=0;i<n;i++)
	{   
	    sum=sum+a[i];
		printf("a[%d]=%d\n",i,a[i]);
	}
	printf("the sum of array elemnts are:%d",sum);
	
}
