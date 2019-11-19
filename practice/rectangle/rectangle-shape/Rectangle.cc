#include "Rectangle.h"
#include "Point.h"

void Rectangle::setTopPoint (double x, double y) {
    this->topPoint.setX(x);
    this->topPoint.setY(y);
}

void Rectangle::setBottomPoint (double x, double y) {
    this->bottomPoint.setX(x);
    this->bottomPoint.setY(x);
}

Point Rectangle::getTopPoint () const {
    return this->topPoint;
}

Point Rectangle::getBottomPoint () const {
    return this->bottomPoint;
}

bool Rectangle::isOverlapping(Rectangle rectangle) {
    bool overlapping = false;

    if (
        (rectangle.topPoint.getX() < this->bottomPoint.getX())
        && (rectangle.topPoint.getY() > this->bottomPoint.getY())
    ) {
        overlapping = true;
    }

    return overlapping;
}