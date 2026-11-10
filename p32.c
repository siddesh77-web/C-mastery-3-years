#include <stdio.h>
#include <stdlib.h>

// 1. Function Prototype (declared at the top)
int findSumOfDigits(int num);

int main() {
    // Variable declarations at the top of main
    int num, result;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // 2. Function Call (passing the number into our function)
    result = findSumOfDigits(num);

    printf("Sum of digits of %d = %d\n", num, result);

    system("pause");
    return 0;
}

// 3. Function Definition (where the actual work happens)
int findSumOfDigits(int num) {
    // Variable declarations at the top of the function
    int temp, sum, remainder;
    
    sum = 0;
    temp = num;

    while (temp != 0) {
        remainder = temp % 10; // Get the last digit
        sum += remainder;      // Add it to sum
        temp /= 10;            // Remove the last digit
    }

    return sum; // Send the final calculated sum back to main()
}
