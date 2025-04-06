#include <stdio.h>

int main() {
    int base , height , a, b,  area , perimeter;

    printf("enter the base of the parallelogram: ");
    scanf("%d",&base);
    printf("enter the height of the parallelogram: ");
    scanf("%d",&height);

    area = base * height;
    printf("area of parallelogram = %d\n",area);

    perimeter = 2 * (a + b);
    printf("perimeter of the parallelogram = %d\n" , perimeter);
    return 0;
}