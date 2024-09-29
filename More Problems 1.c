#include<stdio.h>

int main()
{
	float a,b,c;
	
	printf("Enter a: ");
	scanf("%g",&a);
	
	printf("Enter b: ");
	scanf("%g",&b);
	
	printf("Enter c: ");
	scanf("%g",&c);
	
	if(a>b){
		 if(a>c)
		printf("a is greater than b and c");
		 else
		printf("b is greater than a and c");
	}
	else if(c>a){
		 if(c>b)
		printf("c is greater than a and b");
		 else
		printf("b is greater than a and c");
	}
	
	return 0;

}
