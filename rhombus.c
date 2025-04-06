#include <stdio.h>

int main() {
    int d1, d2, side, area, perimeter;

    printf("Enter the first diagonal: ");
    scanf("%d", &d1);

    area = 0.5 * d1 * d1;
    printf("area of rhombus = %d\n", area);

    perimeter = 4 * side;
    printf("perimeter of rhombus = %d\n", perimeter);

    return 0;
}