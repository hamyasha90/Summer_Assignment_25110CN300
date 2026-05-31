#include <stdio.h>

int main() {
    int num, remainder;
    int product = 1; 

    printf("Enter any number: ");
    scanf("%d", &num);

   
    for (; num > 0; num = num / 10) {
        remainder = num % 10;          
        product = product * remainder; 
    }

    printf("The Product of digits = %d\n", product);

    return 0;
}