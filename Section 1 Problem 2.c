#include<stdio.h>

int main()
{
	int num;
	
	printf("Enter any number:");
	scanf("%d",&num);
	
	if(num>0)
	{
	printf("Number is Positive\n");
	if(num % 2==0){
		printf("The Number is Even\n");	}
		else
		{ printf("The number is Odd\n");
		}
	}
	else if(num == 0){
    printf("Number is Zero\n");
	}
    
	else{
	printf("The number is Negative\n");
	}
return 0;	
}