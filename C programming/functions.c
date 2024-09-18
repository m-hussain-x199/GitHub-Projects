#include <stdio.h>
#include <string.h>
void newprint(char *char1)
{
    printf("The value is %s\n", char1);
}
int sum(int a, int b)
{
    return a + b;
}
float average(float a, float b)
{
    return (a + b) / 2;
}
int glo = 76;


 struct Books
    {
        char name[50];
        char author[50];
        int price;
    }Book;

 void printStruct(struct Books bk){
      printf("Author name is %s\n", bk.author);
      printf("Book name is %s\n", bk.name);
      printf("Price of Book is %d\n",bk.price);
 }   
    

int main()
{
    // Structures:
    struct Books bk1, bk2;
    strcpy(bk1.name , "C programming");
    strcpy(bk1.author , "Dennis");
    bk1.price = 78;
    printStruct(bk1);







    // printf("The sum of the given numbers are %d\n", sum(100, 200));
    // printf("The average of the given numbers are %f\n", average(100, 299));
    // int glo = 2;
    // printf("The global vriable in this program is %d\n", glo);

    // Arrays
    // int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("Enter the value of index %d \n", i);
    //     scanf("%d", &arr[i]);
    // }1
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("The value for index %d is %d\n", i, arr[i]);
    // }
    // char array[5] = {0, 1, 2, 3, 4, 5};
    // for (char i = 0; i < 5; i++)
    // {
    //     printf("enter alphabets whereever you want\n", i, array[i]);
    //     scanf("%c", &array[i]);
    // }
    // for (char i = 0; i < 5; i++)
    // {
    //     printf("The value for index %d is %c\n", i, array[i]);
    // }

    // printf("%d\n", arr[7]);

    // int a = 98;
    // printf("%d\n", a);
    // int* ptr = NULL;
    // if (!ptr){
    //     printf("The value of ptr is not null\n");
    // }
    // ptr = &a;
    // *ptr = 988;
    // printf("%d", a);

    // char name[3] = {'m','y','\0'};
    
    // char str1[65], str2[98], str3[32];
    // strcpy(str1, "Hussain");
    // strcpy(str2, " Harry");
    // strcat(str1, str2);
    // printf("%s", strcmp(str1, str2));
    

   






    return 0;
}
