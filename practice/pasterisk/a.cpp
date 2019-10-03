#include <iostream>
#include <string>

void createPattern();
std::string padLeft(std::string str, int size);
std::string padRight(std::string str, int size);

int main () {
    createPattern();

    return 0;
}

void createPattern() {
    for (int i = 0; i <= 10; i++) {
        if (i == 0) {
            std::cout << " *";
        } else if (i == 5) {
            for (int j = 0; j <= 7; j++) {
                std::cout << "*";
            }
        } else {
            std::cout << padRight("*", i) << "*";
        }

        std::cout << std::endl;
    }
}

std::string padLeft(std::string str, int size) {
    std::string buffer = "";
    for (int i = 0; i <= size; i++) {
        buffer += " ";
    } 

    str = buffer + str;

    return str;
}

std::string padRight(std::string str, int size) {
    std::string buffer = "";
    for (int i = 0; i <= size; i++) {
        buffer += " ";
    }

    str += buffer;

    return str;
}