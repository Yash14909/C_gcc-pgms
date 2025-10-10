#include <stdio.h>
#include <string.h>

#define MAX 50

// Structure definition
struct City {
    char cityName[50];
    char capitalName[50];
};

int main() {
    struct City cities[MAX];
    int choice, count = 0;
    char searchCity[50];

    while (1) {
        printf("\n----- MENU -----\n");
        printf("1. Add City and Capital\n");
        printf("2. Display All\n");
        printf("3. Search by City Name\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // consume newline

        switch (choice) {
            case 1:
                if (count < MAX) {
                    printf("Enter City Name: ");
                    fgets(cities[count].cityName, 50, stdin);
                    cities[count].cityName[strcspn(cities[count].cityName, "\n")] = '\0';

                    printf("Enter Capital Name: ");
                    fgets(cities[count].capitalName, 50, stdin);
                    cities[count].capitalName[strcspn(cities[count].capitalName, "\n")] = '\0';

                    count++;
                    printf(" City and Capital added successfully!\n");
                } else {
                    printf("⚠ Storage full!\n");
                }
                break;

            case 2:
                printf("\n---- List of Cities and Capitals ----\n");
                for (int i = 0; i < count; i++) {
                    printf("%d. City: %s | Capital: %s\n", i + 1, cities[i].cityName, cities[i].capitalName);
                }
                if (count == 0) printf("No records found.\n");
                break;

            case 3:
                printf("Enter City name to search: ");
                fgets(searchCity, 50, stdin);
                searchCity[strcspn(searchCity, "\n")] = '\0';

                int found = 0;
                for (int i = 0; i < count; i++) {
                    if (strcmp(cities[i].cityName, searchCity) == 0) {
                        printf("Capital of %s is %s\n", cities[i].cityName, cities[i].capitalName);
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("City not found!\n");
                break;

            case 4:
                printf("👋 Exiting program...\n");
                return 0;

            default:
                printf("❌ Invalid choice! Try again.\n");
        }
    }

    return 0;
}
