#include<stdio.h>
#include<math.h>

int main() {
    int side , perimeter;
    float area;


    printf("enter the side of the pentagon: ");
    scanf("%d",&side);

    area = 0.25 * sqrt(5*(5 + 2 * sqrt(5))) * side * side ;
    printf("area of the petagon is %f\n",area);

    perimeter = 5 * side;
    printf("perimeter of the pentagon is: %d\n",perimeter);

    return 0;
}