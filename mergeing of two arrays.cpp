#include<stdio.h>
int main()
{
	int a[10],b[10],c[30],n,i,m,j;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the elements in first array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the size of array");
	scanf("%d",&m);
	printf("enter the elements in second array");
	for(i=0;i<m;i++);
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	for(j=0;j<m;j++)
	{
		c[n+j]=b[j];
	}
	printf("merged array=");
	for(i=0;i<n+m;i++)
	{
		printf("%d",c[i]);
	}
	printf("\n");
}
