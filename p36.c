#include <stdio.h>
#include <math.h> 

void update(int a, int b, int *sum, int *diff, int *mult, int *div) {
    *sum = a + b;
    *diff = abs(a - b);
    *mult = a * b;
    
    if (b != 0) {
        *div = a / b; 
    } else {
        *div = 0;     
        printf("Warning: Division by zero is undefined.\n");
    }
}

int main() {
    int a, b;
    int sum, diff, mult, div; // Variables to store the results

    printf("Enter values: ");
    scanf("%d %d", &a, &b);

    // Pass the original values and the addresses of the result variables
    update(a, b, &sum, &diff, &mult, &div);

    printf("sum = %d\n", sum);
    printf("Diff = %d\n", diff);
    printf("Mult = %d\n", mult);
    printf("Divi = %d\n", div);

    return 0;
}
