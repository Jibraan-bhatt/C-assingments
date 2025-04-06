#include <stdio.h>

int main() {
    int a, b, c, d ,height,  area, perimeter;
/*a and  b are the lengths of two parallel sides of trapezium*/

    printf("Enter the length of side a of trapezium: ");
    scanf("%d", &a);

    printf("enter the length of side b of trapezium: ");
    scanf("%d", &b);

    printf("enter the height of the trapezium: ");
    scanf("%d", &height);

    area = 0.5 * (a + b) * height;
    printf("area of the trapezium = %d\n", area);

    printf("enter the length of side c of trapezium: ");
    scanf("%d", &c);

    printf("enter the length of the side d of trapezium: ");
    scanf("%d", &d);

    perimeter = a + b + c + d;
    printf("perimeter of the trapezium = %d\n", perimeter);

    return 0;
}