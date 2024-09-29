#include <stdio.h>

int main() {
    int number,digit_1,digit_2,Sum;


    printf("Enter Number: ");
    scanf("%d", &number);

  
    Sum = number / 10 + number % 10;

   
    if (Sum < 10) {
        printf("Sum of digits: %d\n", Sum);
    } else {
       
        digit_1 = Sum / 10;
        digit_2 = Sum % 10;
        Sum = digit_1 + digit_2;

        if (Sum < 10) {
            printf("Sum of digits: %d\n", Sum);
        } else {
            
            digit_1 = Sum / 10;
            digit_2 = Sum % 10;
            Sum = digit_1 + digit_2;

            if (Sum < 10) {
                printf("Sum of digits: %d\n", Sum);
            } else {
                digit_1 = Sum / 10;
                digit_2 = Sum % 10;
                Sum = digit_1 + digit_2;

                printf("Sum of digits: %d\n", Sum);
            }
        }
    }

    return 0;
}