#include <stdio.h>
// Outside function:

// 1. Declare a function prototype
// 2. Declare a variable
// 3. Call the function
// Inside function:
// 1. Declare a variable
// 2. Call the function
// 3. Return a value

int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
} 
    int main()
    {

        // Recursive Function
        int num;
        printf("Enter the number you want the factorial of: \n");
        scanf("%d", &num);
        printf("the factorial of %d is the %d\n", num, factorial(num));

        return 0;
    }