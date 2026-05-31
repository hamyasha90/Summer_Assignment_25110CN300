  #include <stdio.h>

int main() {
    int start_num, end_num, num, div;
    int check_prime; 

    printf("Enter lower limit: ");
    scanf("%d", &start_num);
    
    printf("Enter upper limit: ");
    scanf("%d", &end_num);

    printf("Primes in the range: \n");

    for (num = start_num; num <= end_num; num++) {
        if (num < 2) {
            continue;
        }

        check_prime = 1; 

        // Loop to check for factors
        for (div = 2; div < num; div++) { 
            if (num % div == 0) {
                check_prime = 0; 
                break;       
            }
        }

        if (check_prime == 1) {
            printf("%d\t", num); 
        }
    }

    printf("\n");
    return 0;
}      