#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#define MAX_ITEMS 5
#define MAX_NAME_LENGTH 50
void displaymenu();
void takeorder();
void calculatetotal();
void takecustomerdetails();

char menu[MAX_ITEMS][2][MAX_NAME_LENGTH] = {
    {"Burger", "$5.49 "},
    {"Pizza", "$9.99"},
    {"Sandwich", "$4.99"},
    {"Salad", "$6.99"},
    {"Soup", "$3.99"}};
int order[MAX_ITEMS] = {0};

int main()
{
    int choice;
    printf("Welcome to Saleem Bakery!!!\n");
    do
    {
        printf("\nEnter your choice: ");
        printf("\n1. Display Menu\n2. Take Order\n 3. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            displaymenu();
            break;
        case 2:
            takeorder();
            break;
        case 3:
            printf("Thank you for visiting. Please come again! Good bye!\n");
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    } while (choice != 3);

    return 0;
}
void displaymenu()
{
    printf("--------------Menu---------------\n");
    printf("Item\t\tPrice\n");
    for (int i = 0; i < MAX_ITEMS; i++)
    {
        printf("%d.%s\t\t$%s\n", i + 1, menu[i][0], menu[i][1]);
    }
}
void takeorder()
{
    int itemindex, quantity;
    char choice;
    do
    {
        printf("\nEnter the item you want to order (1-%d) or 0 to finish: ", MAX_ITEMS);
        scanf("%d", &itemindex);
        if (itemindex < 0 || itemindex > MAX_ITEMS)
        {
            printf("Invalid choice. Please try again.\n");
            continue;
        }
        if (itemindex == 0)
        {
            break;
        }
        printf("Enter Quantity: ");
        scanf("%d", &quantity);
        order[itemindex - 1] += quantity;
        printf("Do you want to order anything else?  (y/n): ");
        scanf("%c", &choice);

    } while (choice == 'y' || choice || 'Y');
    

}
