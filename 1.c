#include<stdio.h>
void main()
{
	int sum=0,*a,*b,i,j;
	a=&i,b=&j;
	printf("enter the first no.");
	scanf("%d",a);
	printf("enter the second no.");
	scanf("%d",b);
	sum=*a+*b;
	printf("\nsum=%d",sum);
}

