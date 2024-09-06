#include<stdio.h>
int main()
{
	int i,a,b, count=0,sum=0;
	printf("ennter a number of a and b");
	scanf("%d %d",&a,&b);
	printf("integers divisible by 5 are \n");
    if(i%5==0)
	{
        printf("%3d",i);
	    count++;
	    sum=sum+i;
	}
	printf("\n number of integers divisible by 5 between %d and %d and %d=%d\n",a,b,count);
	printf("sum of all integers that are divisible by 5 = %d\n",sum);
}
