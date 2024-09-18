#include <stdio.h>

// int factorial(number){
//     if(number == 0 || number ==1){
//         return 1;
//     }else
//     {
//         return (number * factorial(number -1));
//     }
    
// }



int main()
{
//    int num;
//    printf("Enter a number which you want a factorial of it: \n");
//    scanf("%d",&num);
//    printf("Factorial of %d is %d", num, factorial(num));




//     printf("\n\n*********Loops Concept learning by myself******\n\n");
//     // int index = 0;
//     // while (index > 10)
//     // {
//     //     printf("%d\n", index);
//     //     index++;
//     // }
//     // int i;
//     // for ( i = 0; i < 10; i++)
//     // {
//     //     printf("%d\n", i);

//     // }
//     // do
//     // {
//     //     printf("Do while is running\n");
//     // } while (i > 500);

//     // this file created for myself for practising and it include all teh things that i've learned!
//     // i will add more things to this file as i learn more things

//     //   printf("the sum of the given numbers are %d\n", sum(1,2));
//     // //   printf("the average of the given numbers are %f\n", average(25,5));
//     //   newprint("%s Hello world!\n");

//     // arrays
//     //   int arr[5] = {1,2,3,4,5};
//     //   for (int i = 0; i < 5; i++)
//     //   {
//     //     printf("Enter the value for the index %d\n", i);
//     //     scanf("%d", & arr[i]);
//     //   }
//     //   for (int i = 0; i < 5; i++)
//     //   {
//     //     printf("The values given for the index %d is %d\n", arr[i]);
//     //   }

//     int n, m = 1;
//     printf("Enter the number of rows: \n");
//     scanf("%d", &n);
//     for (int i = 0; i >= 1; i--)
//     {
//         for (int j = 0; j <= i; i++)
//         {
//             if (j == 1 || j == i || i == n)
//             {
//                 printf("*");
//             }
//             else
//                 printf(" ");
//         }
//     }
//     printf("\n");
int n;
printf("Enter the number of rows:\n");
scanf("%d", &n);
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < i+1; j++)
    {
        printf("*");
    }printf("\n");
    
}

    return 0;
}
// // Creating functions outside the main function
// // int sum(int a, int b){
// //     return a + b;
// // }
// // float average(float a, float b){
// //     return (a + b) / 2;
// // }
// // void newprint(char * char1){
// //     printf("The value is %s\n", newprint);
// // }
