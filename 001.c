#include<stdio.h>
void main()
{
	int a,b,*c,*d,sum;
	c=&a;
	d=&b;
	printf("enter first number=");
	scanf("%d",c);
	printf("enter second number=");
	scanf("%d",d);
	sum=*c+*d;
	printf("sum=%d",sum);
}
	
