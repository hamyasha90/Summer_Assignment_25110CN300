#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

   
    for (; num != 0; num = num / 10) {
        digit = num % 10;   
        sum = sum + digit;  
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
