#include<stdio.h>
#include<math.h>

int main() {
    int side , perimeter;
    float area;

    printf("Enter the side of the hexagon: ");
    scanf("%d", &side);

    area = (3 * sqrt(3) * side * side) / 2;
    printf("area of the hexagon = %f\n", area);

    perimeter = 6 * side;
    printf("perimeter of the hexagon = %d\n", perimeter);

    return 0;
}