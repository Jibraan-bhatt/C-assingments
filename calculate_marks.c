#include <stdio.h>

int main() {
    float math, AI, CS, English, science, aggregate, percentage;

    printf("Enter marks for five subjects (out of 100): ");
    scanf("%f%f%f%f%f",&math, &AI, &CS, &English, &science);

    aggregate = math+ AI+ CS+ English+ science;
    percentage = (aggregate / 500) * 100;

    printf("Aggregate Marks: %.2f\n", aggregate);
    printf("Percentage: %.2f\n", percentage);

    return 0;
}
