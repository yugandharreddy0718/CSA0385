
#include<stdio.h>
int main(){
 int n,i,f1=0,f2=1,f3=0;
 printf("enter the range:");
 scanf("%d",&n);
 printf("fabonacci series:");
 for(i=0;i<n;i++)
 {
 	f1=f2;
 	f2=f3;
	f3=f1+f2;
 printf("%d",f3);
}
 return 0;
}

