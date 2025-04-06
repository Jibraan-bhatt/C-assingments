
#include <stdio.h>

int main() {
    int radius, area, perimeter;
    
    printf("Enter radius :");
    scanf("%d", &radius);
    
    area = 3.14 *(radius*radius);
    perimeter = 2 * 3.14 * radius;
    
    printf("Area of Circle : %d \n",area);
    printf("Perimeter of circle : %d",perimeter);
    return 0;
}


