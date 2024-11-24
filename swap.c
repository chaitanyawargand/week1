#include<stdio.h>
int main()
{
	int a,b,t;
	printf("enter the a\n");
	scanf("%d",&a);
	printf("enter the b\n");
	scanf("%d",&b);
	t=a;
	a=b;
	b=t;
	
	printf("the value of a is %d\n the value of b is %d\n",a,b);
	
	return 0;
	
	
}
