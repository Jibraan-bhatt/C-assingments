#include <stdio.h>

int main() {
    int num, reverse = 0;

    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    reverse = reverse * 10 + num % 10;
    num = num / 10;

    reverse = reverse * 10 + num % 10;
    num = num / 10;

    reverse = reverse * 10 + num % 10;
    num = num / 10;

    reverse = reverse * 10 + num % 10;
    num = num / 10;

    reverse = reverse * 10 + num % 10;

    printf("Reversed number = %d\n", reverse);

    return 0;
}
