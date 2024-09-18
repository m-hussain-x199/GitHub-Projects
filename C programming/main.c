#include <stdio.h>

// int main(){
//     printf("Hello World\n");
//     return 0;
// }
int main()
{
    //   //compiler will ignore this
    // // int, float, char

    // printf("The size taken by int is %d\n", sizeof(int));
    // printf("The size taken by unsigned int is %d\n", sizeof(unsigned int));
    // printf("The size taken by float is %d\n", sizeof(float));

    // printf("\n******Rules for creating variables*******");
    // int harry;        // This is variable declaration
    // harry = 79;       // This is initialisation
    // char five = 5;    // This is declaration and initialisation
    // const int i = 10; // for constant values

    // printf("\n******Types of Operators*******");
    // int a = 6, b = 7;
    // printf("The sum of a and b is %d\n", a + b);
    // printf("The difference of a and b is %d\n", a - b);
    // printf("The division of b and a is %d\n", b / a);
    // printf("The product of a and b is %d\n", a * b);
    // printf("The modulus of a nad b is %d\n", a % b);
    // printf("The increment of a is %d\n", ++a);
    // printf("The decrement of a is %d\n", --a);

    // // Relational Operators
    // int harry1 = 9, rohan = 45;
    // printf("%d\n", harry1 != rohan);
    // printf("%d\n", harry1 >= rohan);
    // printf("%d\n", harry1 == rohan);
    // printf("%d\n", harry1 <= rohan);

    // // Logical Operators
    // int h = 0, j = 1;
    // printf("The logical operation returned %d\n", h && j);
    // printf("The logical operation returned %d\n", h || j);
    // printf("The logical operation returned %d\n", !j);
    // printf("The logical operation returned %d\n", !h);

    // // Bitwise Operator

    // int A = 60;
    // int B = 14;
    // printf("----------Bitwise Operators----------\n");
    // printf("Bitwise operator returned %d\n",A&B);
    // printf("Bitwise operator returned %d\n",A|B);
    // printf("Bitwise operator returned %d\n",A^B);
    // printf("Bitwise operator returned %d\n",~A);
    // printf("Bitwise operator returned %d\n",A<<B);
    // printf("Bitwise operator returned %d\n",A>>B);

    // // Assignment Operators
    // int ha = 9;
    // ha += 9;
    // printf("ha is %d\n", ha);

    // printf("\n******Taking input from the user*******");
    // int input;
    // printf("\n Please enter the value of input");
    // scanf("%d",& input);
    // printf("\n You entered %d as an input", input);

    // int num1, num2;
    // scanf("%d", & num1);
    // scanf("%d", & num2);
    // printf("\n The div of num1 and num2 is %f\n",(float) num1/ num2);

    // int n;
    // printf("Enter the number of rows");
    // scanf("%d",&n);
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // Decision making
    int age = 44;
    printf("\n\n**********Decision making in C**********\n\n");
    printf("Enter your age!\n");
    // scanf("\n%d", &age);
    if (age < 18)
    {
        printf("You are eligible to drive!\n");
    }
    else if (age >= 18 && age <= 24)
    {
        printf("You are not eligible to drive!\n");
    }
    else
    {
        printf("You can drive!\n");
    }
    int i4 = age > 3 ? 100 : 200; // Short hand if else if else statement
    printf("%d", i4);

    printf("\n\n**********Loops in C**********\n\n");
    int index = 0;
    while (index < 10){
        printf("%d\n", index);
        index++;
    }
    for (int j = 0; j < 67; j++)
    {
        printf("%d\n", j);
    }
     int i = 0;
    do
    {
        printf("do while loop is running\n");

    } while (i > 65656);



    printf("\n\n*********Functions in C**********\n\n");
    

    


    return 0;
}