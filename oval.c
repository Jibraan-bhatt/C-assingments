#include<stdio.h>
#include<math.h>

int main() {
    int a,b,area,perimeter;
/*a and b are the semi-majar and semi-minor axis respectively*/
    
    printf("Enter the semi-major axis: ");
    scanf("%d", &a);
    printf("Enter the semi-minor axis: ");
    scanf("%d", &b);

    area = 3.14 * a * b;
    printf("area of oval = %d\n", area);

    perimeter = 3.14 * ( 3 *(a + b) - sqrt((3*a + b) * (a + 3*b)) );
    printf("perimeter of oval = %d\n", perimeter);

    return 0;
}