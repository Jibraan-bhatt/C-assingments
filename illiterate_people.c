#include <stdio.h>

int main() {
    int total_population = 80000;
    float men_percentage = 52.0, literacy_percentage = 48.0, literate_men_percentage = 35.0;

    int total_men, total_women, literate_men, illiterate_men, illiterate_women;

    total_men = (men_percentage / 100) * total_population;
    total_women = total_population - total_men;

    literate_men = (literate_men_percentage / 100) * total_population;

    illiterate_men = total_men - literate_men;

    int total_literates = (literacy_percentage / 100) * total_population;

    illiterate_women = total_women - (total_literates - literate_men);

    printf("Illiterate men: %d\n", illiterate_men);
    printf("Illiterate women: %d\n", illiterate_women);

    return 0;
}
