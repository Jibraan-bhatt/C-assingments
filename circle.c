#include <stdio.h>

int main() {
    int r , area , perimeter ;
    printf("Enter the radius of the circle : ");
    scanf("%d",&r);

    area = 3.14 * r * r ;
    printf("area of the circle = %d\n",area);

    perimeter = 2 * 3.14 * r ;
    printf("perimeter of the circle = %d\n",perimeter);
    return 0 ;
}