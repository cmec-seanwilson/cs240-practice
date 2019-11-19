#include <iostream>
#include "car.h"

int main () {
    Car cars[2] = {
        Car("Nissan Altima", 2008, "Silver", "123456abc7891011", 150000),
        Car("Dodge RAM", 2005, "Gray", "112134525560627", 50000)
    };

    for (int i = 0; i < 2; i++) {
        Car car = cars[i];
        std::cout << car.getType();
    }
}