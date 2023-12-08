#include <stdio.h>
#include <string.h>

#define MAX_CITIES 100
#define MAX_CITY_NAME_LENGTH 50

int main() {
    char cities[MAX_CITIES][MAX_CITY_NAME_LENGTH];
    int numCities;

    printf("Enter the number of cities: ");
    scanf("%d", &numCities);

    if (numCities <= 0 || numCities > MAX_CITIES) {
        printf("Invalid number of cities. Please enter a number between 1 and 100.\n");
        return 1;
    }

    printf("Enter the names of cities:\n");
    for (int i = 0; i < numCities; ++i) {
        printf("City %d: ", i + 1);
        scanf("%s", cities[i]);
    }

    // Bubble sort to sort cities alphabetically
    for (int i = 0; i < numCities - 1; ++i) {
        for (int j = 0; j < numCities - i - 1; ++j) {
            if (strcmp(cities[j], cities[j + 1]) > 0) {
                // Swap the cities if they are out of order
                char temp[MAX_CITY_NAME_LENGTH];
                strcpy(temp, cities[j]);
                strcpy(cities[j], cities[j + 1]);
                strcpy(cities[j + 1], temp);
            }
        }
    }

    printf("\nCities in alphabetical order:\n");
    for (int i = 0; i < numCities; ++i) {
        printf("%s\n", cities[i]);
    }

    return 0;
}
