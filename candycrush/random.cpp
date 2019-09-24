#include <iostream>
#include <ctime>
#include <cstdlib>

int main () {
    srand(time(NULL));
    for (int i = 1; i <= 10; i++) {
        std::cout << rand() << std::endl;
    }

    return 0;
}