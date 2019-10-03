#include <iostream>
#include <string>

void createPattern();

int main () {
    createPattern();

    return 0;
}

void createPattern() {
    for (int i = 0; i <= 10; i++) {
        if (i == 0 || i == 5 || i == 10) {
            for (int j = 0; j <= 10; j++) {
                std::cout << "*";
            }
        } else {
            std::cout << "*";
        } 

        std::cout << std::endl;
    }
}