#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the a\n");
	scanf("%d",&a);
	printf("enter the b\n");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("the value of a is %d\n the value of b is %d\n",a,b);
	
	return 0;
	
	
}
