#ifndef POINT_H
#define POINT_H

class Point {

  private:
    double x;
    double y;

  public:
    Point() {
      this->x = 0;
      this->y = 0;
    }
    Point (double x, double y) {
      this->x = x;
      this->y = y;
    }

    void setX(double x);
    void setY(double y);
    double getX() const;
    double getY() const;
    void shiftX(double x);
    void shiftY(double y);
};
#endif