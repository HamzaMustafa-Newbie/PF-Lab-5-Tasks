#include<stdio.h>

int main()
{
	int age;
	char citi;
	
	printf("Enter your age: ");
	scanf("%d",&age);
	
	printf("Citizenship(Y for yes and N for No): ");
	scanf(" %c", &citi);
	
	if(age>=18 && (citi == 'Y' || citi == 'y')){
		printf("You are eligable for vote");}
		
		else if(age < 18 || citi == 'N'|| citi == 'n')
		{
		printf("Sorry You are Not Eligable for vote");}
		
		else
		{
		printf("Invalid Input (Y for Yes and N for No)");
		}
	
	return 0;
	}
	