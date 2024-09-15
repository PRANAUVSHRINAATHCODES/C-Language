#include <stdio.h>
#include <math.h> // For the trunc() function

// Function to perform division and truncate result toward zero
long long divide(long long dividend, double divisor) {
    // Check for division by zero
    if (divisor == 0.0) {
        fprintf(stderr, "Error: Division by zero is undefined.\n");
         // You might want to handle this case differently depending on your requirements
    }
    
    // Truncate the divisor to an integer
    int truncated_divisor = (int)trunc(divisor);
    
    // Perform the integer division
    long long result = dividend / truncated_divisor;

    
}

int main() {
    long long dividend = 922337203685;
    double divisor = 12.6;

    // Call the divide function
    long long result = divide(dividend, divisor);

    // Print the result
    printf("Result: %lld\n", result);

    
}




