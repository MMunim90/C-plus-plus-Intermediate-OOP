#include <stdio.h>

struct Engine {
    int horsepower;
    int cylinders;
};

struct Car {
    char brand[50];
    int year;
    struct Engine eng; // Composition
};

int main() {
    struct Car myCar = {"Toyota", 2023, {150, 4}};

    printf("Brand: %s\n", myCar.brand);
    printf("Year: %d\n", myCar.year);
    printf("Horsepower: %d HP\n", myCar.eng.horsepower);
    printf("Cylinders: %d\n", myCar.eng.cylinders);

    return 0;
}