#include <stdio.h>

int main() {
    int x, y;
    printf("Enter the first number 'x': ");
    scanf("%d", &x);
    
    printf("Enter the second number 'y': ");
    scanf("%d", &y);
    
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    
    printf("After Swapping: x = %d, y = %d\n", x, y);
    
    return 0;
}