#include <iostream>
#include <string>

void createPattern(int size);

int main () {
    createPattern(10);

    return 0;
}

void createPattern(int size) {
    for (int i = size; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            std::cout << "*";
        }
    
        std::cout << std::endl;
    }
}