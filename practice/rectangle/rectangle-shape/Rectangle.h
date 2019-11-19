#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Point.h"

class Rectangle {
    private:
        Point topPoint;
        Point bottomPoint;

    public:
        Rectangle(double topLeftX, double topLeftY, double bottomRightX, double bottomRightY) {
            this->topPoint.setX(topLeftX);
            this->topPoint.setY(topLeftY);
            this->bottomPoint.setX(bottomRightX);
            this->bottomPoint.setY(bottomRightY);
        }

        void setTopPoint(double, double);
        void setBottomPoint(double, double);
        Point getTopPoint() const;
        Point getBottomPoint() const;
        bool isOverlapping(Rectangle);
};
#endif