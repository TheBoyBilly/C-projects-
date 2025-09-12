#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void) {

    // CART  PROGRAM

    char item[30] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;
     
    printf("What would you like to purchase: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("How much is the item: ");
    scanf(" %f", &price);

    printf("How many would you like to purchase: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nYou have purchased %d %s at: \n", quantity, item);
    printf("%c%.2f", currency, total);

    return 0;
}