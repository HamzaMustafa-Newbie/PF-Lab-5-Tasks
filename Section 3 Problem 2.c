#include<stdio.h>

int main()
{
	int num;
	printf("Enter the Number:");
	scanf("%d",&num);
	
	(num>0)? printf("The Number %d is Positive",num): 
	(num<0)? printf("The Number %d is Negative",num):
	printf("The Number %d is Zero",num);
	
	return 0;
} 