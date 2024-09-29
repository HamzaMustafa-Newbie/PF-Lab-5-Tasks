#include<stdio.h>

int main()
{
	int age;
	
	printf("Enter your age: ");
	scanf("%d",&age);
	
	if (age<0)
	printf("You have entered an Invalid Input");
	else if (age<12)
	printf("You are a Child");
	else if (age<18)
	printf("You are a Teenager");
	else if (age<65)
	printf("You are a Adult");
	else
	printf("You are a Senior");

	
	return 0;
	
}