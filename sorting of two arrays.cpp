#include<stdio.h>
int main()
{
	int a[100],i,j,n,temp;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the elements in array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("before sorting array");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	    printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
	    {
	    	if(a[i]>a[j])
	    	{
	    		temp=a[i];
	    		a[i]=a[j];
	    		a[j]=temp;
			}
		}	
	}
	printf("after sorting of array:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
