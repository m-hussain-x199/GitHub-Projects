#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITEMS 5
#define MAX_NAME_LENGTH 50

// Function prototypes
void displayMenu();
void takeOrder();
float calculateTotal();
void takeCustomerDetails();

// Global variables
char menu[MAX_ITEMS][2][MAX_NAME_LENGTH] = {
    {"Burger", "5.00"},
    {"Pizza", "8.00"},
    {"Salad", "4.50"},
    {"Fries", "2.50"},
    {"Soda", "1.50"}
};
int order[MAX_ITEMS] = {0};

int main() {
    int choice;

    printf("Welcome to Our Restaurant!\n");

    do {
        printf("\n1. Display Menu\n2. Place Order\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayMenu();
                break;
            case 2:
                takeOrder();
                break;
            case 3:
                printf("Thank you for visiting. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter again.\n");
                break;
        }
    } while (choice != 3);

    return 0;
}

void displayMenu() {
    printf("\n--- Menu ---\n");
    printf("Item\t\tPrice\n");
    for (int i = 0; i < MAX_ITEMS; ++i) {
        printf("%d. %s\t\t$%s\n", i + 1, menu[i][0], menu[i][1]);
    }
}

void takeOrder() {
    int itemIndex, quantity;
    char choice;

    do {
        displayMenu();
        printf("\nEnter the item number you want to order (1-%d) or 0 to finish: ", MAX_ITEMS);
        scanf("%d", &itemIndex);

        if (itemIndex < 0 || itemIndex > MAX_ITEMS) {
            printf("Invalid item number. Please try again.\n");
            continue;
        }

        if (itemIndex == 0) {
            break;
        }

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        order[itemIndex - 1] += quantity;

        printf("Do you want to order anything else? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    float totalCost = calculateTotal();
    printf("Your total cost is: $%.2f\n", totalCost);

    takeCustomerDetails();
}

float calculateTotal() {
    float total = 0.0;

    for (int i = 0; i < MAX_ITEMS; ++i) {
        if (order[i] > 0) {
            float price = atof(menu[i][1]); // Convert price string to float
            total += order[i] * price;
        }
    }

    return total;
}

void takeCustomerDetails() {
    char name[MAX_NAME_LENGTH];
    char address[MAX_NAME_LENGTH];

    printf("\nPlease enter your name: ");
    scanf(" %[^\n]", name);

    printf("Please enter your address: ");
    scanf(" %[^\n]", address);

    printf("\nThank you, %s! Your order will be delivered to %s.\n", name, address);
}




int main(){
    int age;
    printf("Enter your age:\n");
    scanf("%d",&age);

    int marks;
    printf("Enter your marks:\n");
    scanf("%d",&marks);
    switch (age)
    {
    case 3:
        printf("The age is 3\n");
        switch (marks)
        {
        case 45:
            printf("Your marks are 45\n");
            break;
        
        default:
        printf("your marks aren't 45\n");
            break;
        }
        break;
    case 13:
        printf("The age is 13\n");
        break;
    case 23:
        printf("The age is 23\n");
        break;
    
    default:
    printf("The age is not 3, 13 or 23\n");
        break;
    }
    
    
    
    return 0;
}












