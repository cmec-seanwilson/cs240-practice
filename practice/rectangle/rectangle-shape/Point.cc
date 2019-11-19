#include "Point.h"

// Point::Point();

void Point::setX (double x) {
    this->x = x;
}

void Point::setY (double y) {
    this->y = y;
}

double Point::getX () const {
    return this->x;
}

double Point::getY () const {
    return this->y;
}

void Point::shiftX (double x) {
    this->x += x;
}

void Point::shiftY (double y) {
    this->y += y;
}