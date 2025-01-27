#include <stdio.h>

int main() {

    float num1 = 5.5, num2 = 2.2;
    float sum, difference, product, quotient;

 
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;

    printf("Floating-Point Operations:\n");
    printf("The sum is: %.2f\n", sum);
    printf("The difference is: %.2f\n", difference);
    printf("The product is: %.2f\n", product);
    printf("The quotient is: %.2f\n\n", quotient);


    int a = 10, b = 3, remainder;
    remainder = a % b;


    printf("Modulus Operation:\n");
    printf("The remainder when %d is divided by %d is: %d\n\n", a, b, remainder);


    char letter = 'A';

    printf("Character and ASCII Value:\n");
    printf("The character is: %c\n", letter);
    printf("The ASCII value is: %d\n\n", letter);

    int userInt;
    float userFloat;

    printf("Input and Output:\n");
    printf("Enter an integer: ");
    scanf("%d", &userInt);
    printf("Enter a float: ");
    scanf("%f", &userFloat);

    printf("You entered integer: %d and float: %.2f\n\n", userInt, userFloat);


    int count = 5;

    printf("Increment and Decrement Operations:\n");
    printf("Initial value: %d\n", count);
    printf("After pre-increment: %d\n", ++count);
    printf("After post-increment: %d\n", count++); 
    printf("Value after post-increment: %d\n", count);


    return 0;
}
