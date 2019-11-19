#include <iostream>
#include "Rectangle.h"
// #include "Point.h"

int main () {
    Rectangle rect1(0, 5, 5, 0);
    Rectangle rect2(1, 2, 2, -10);
    std::cout << rect1.isOverlapping(rect2) << std::endl;
}