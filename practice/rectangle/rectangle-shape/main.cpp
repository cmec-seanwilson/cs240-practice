#include <iostream>
#include "Rectangle.h"

int main () {
    // Overlapping 
    Rectangle rect1(0, 5, 5, 0);
    Rectangle rect2(1, 2, 2, -10);

    std::cout << "Result: " << rect1.isOverlapping(rect2) << std::endl;

    // Not overlapping
    rect2.setTopPoint(0, -1);
    rect2.setBottomPoint(5, -5);
    std::cout << "Result: " << rect1.isOverlapping(rect2) << std::endl;
}