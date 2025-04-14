#include <stdio.h>

int main() {
    float km, meters, feet, inches, centimeters;

    printf("Enter distance between two cities in kilometers: ");
    scanf("%f", &km);

    meters = km * 1000;
    centimeters = meters * 100;
    inches = meters * 39.3701;
    feet = meters * 3.28084;

    printf("Distance in meters: %.2f\n", meters);
    printf("Distance in feet: %.2f\n", feet);
    printf("Distance in inches: %.2f\n", inches);
    printf("Distance in centimeters: %.2f\n", centimeters);

    return 0;
}
