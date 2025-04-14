#include <stdio.h>

int main() {
    int amount, notes_100, notes_50, notes_10;

    printf("Enter the amount to be withdrawn (in hundreds): ");
    scanf("%d", &amount);

    notes_100 = amount / 100;
    amount = amount % 100;

    notes_50 = amount / 50;
    amount = amount % 50;

    notes_10 = amount / 10;
    amount = amount % 10;

    printf("Total number of 100 denomination notes: %d\n", notes_100);
    printf("Total number of 50 denomination notes: %d\n", notes_50);
    printf("Total number of 10 denomination notes: %d\n", notes_10);

    return 0;
}
