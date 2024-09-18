#include <stdio.h>
int main()
{
    int n;
    int a = 0, b = 1;
    printf("\nEnter the number of terms:");
    scanf("%d \n", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d", n);
        int c = a + b;
        a = b;
        b = c;
    }





    // int n;
    // printf("Enter the number of terms: ");
    // scanf("%d", &n);

    // if (n <= 0) {
    //     printf("Please enter a positive integer.\n");
    // } else if (n == 1) {
    //     printf("Fibonacci Series: 0\n");
    // } else {
    //     printFibonacci(n);
    // }

    






    return 0;
}
// void printFibonacci(int n) {
//     int t1 = 0, t2 = 1, nextTerm;

//     printf("Fibonacci Series: %d, %d", t1, t2);

//     for (int i = 1; i <= n-2; ++i) {
//         nextTerm = t1 + t2;
//         printf(", %d", nextTerm);
//         t1 = t2;
//         t2 = nextTerm;
//     }
//     printf("\n");
// }