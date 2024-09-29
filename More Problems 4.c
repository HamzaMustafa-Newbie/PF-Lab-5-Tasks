#include<stdio.h>

int main()
{
	int age,income,credit_score;
	
	printf("Enter your age: ");
	scanf("%d",&age);
	
	printf("Enter your income: ");
	scanf("%d",&income);
	
	printf("Enter your credit score: ");
	scanf("%d",&credit_score);
	
	if(age>=22 && age<=50 && income>=60000 && credit_score>=550){

		printf("Congratulations You are eligible for a loan");}
		
	else
		{
		printf("Sorry! You are not eligible for a loan");
	}
	

	return 0;	
	
}