#include <stdio.h>

int main() {
    int money;
    printf("Enter the amount of money your friend has: ");
    scanf("%d", &money);

    if (money >= 10000) {
        printf("Your friend will buy a Gucci Bag\n");
        if (money > 20000) {
            printf("And if she has more than 20 thousand taka, she will also buy a Gucci Belt.\n");
        }
    } else if (money >= 5000) {
        printf("Your friend will buy a Levis Bag\n");
    } else {
        printf("Your friend will buy something from New Market\n");
    }

    return 0;
}
