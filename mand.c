#include <stdio.h>

int main() 
{
    int num1, num2, sum;

    // Prompt the user to enter two integers
    printf("Enter two integers: ");

    // Read the inputs and store them in variables
    scanf("%d %d", &num1, &num2);

    // Calculate the sum using the + operatorcd 
    sum = num1 + num2;

    // Display the final result
    printf("Sum: %d\n", sum);

    return 0;
    
}