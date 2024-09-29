#include <stdio.h>

int main() 
{
    unsigned int Number;
    
    printf("Enter Positive Integer: ");
    scanf("%u", &Number);
    
    Number = Number - ((Number >> 1) & 0x55555555);
    Number = (Number & 0x33333333) + ((Number >> 2) & 0x33333333);
    Number = (Number + (Number >> 4)) & 0x0F0F0F0F;
    Number = Number + (Number >> 8);
    Number = Number + (Number >> 16);
    
    int Result = Number & 0x3F;
    
    printf("The Number of 1s in the binary Representation is: %d\n", Result);
    
    return 0;
}