#include <iostream>
#include "rectangle.h"

int main() {
  Rectangle rect(1.0, 2.0);

  std::cout << "Properties of my rectangle:" << std::endl;
  std::cout << "Width: " << rect.getWidth() << std::endl;
  std::cout << "Length: " << rect.getLength() << std::endl;
  std::cout << "Area: " << rect.getArea() << std::endl;
  std::cout << "Permieter: " << rect.getPerimeter();
}
