#include<stdio.h>

int main()
{
	float a,b;
	printf("Enter the value of a: ");
	scanf("%f",&a);
	printf("Enter the value of b: ");
	scanf("%f",&b);
	
	a>b? printf("(a) %f is Greater",a):
	a<b? printf("(b) %f is Greater",b):
	printf("(a) %f and (b) %f are Equal",a,b);
	
	return 0;
}