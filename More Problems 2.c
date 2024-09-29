#include<stdio.h>

int main()
{
	float attendance,assignment_scores,exam_marks,final_result;
	
	printf("Enter the attendance(1 to 100 Percentage): "); // attendace 10 percentage
	scanf("%g",&attendance);
	
	printf("Enter the assignment scores(1 to 100): "); // assignment_scores 15 percentage
	scanf("%g",&assignment_scores);
	
	printf("Enter the exam marks(1 to 100): "); // exam marsk 75 percentage
	scanf("%g",&exam_marks);
	
	if (attendance >=0 && attendance<=100 && assignment_scores>= 0 && assignment_scores<=100 && exam_marks>=0 && exam_marks<=100){
		final_result = ((attendance * 0.10) + (assignment_scores * 0.15) +(exam_marks * 0.75));
		printf("The final result is : %g ",final_result);
	    }else
	    printf("invalid input");
	 
	
	return 0;
	
}