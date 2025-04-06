#include <stdio.h>
int main() {
    int base , height , a,b, c , area, perimeter;
    printf("Enter the base of the triangle: ");
    scanf("%d",&base);

    printf("enter the height of the triangle: ");
    scanf("%d", &height);

    area = 0.5 *(base*height);

    printf("area of triangle = %d\n",area);

    printf("enter the side a of the triangle: ");
    scanf("%d",&a);

    printf("enter the side b of the triangle: ");
    scanf("%d", &b);

    printf("enter the side c of the triangle: ");
    scanf("%d",&c);

    perimeter = a +b+c;
    printf("perimeter of triangle = %d\n",perimeter);
    return 0;
}