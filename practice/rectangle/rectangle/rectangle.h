class Rectangle {
  private:
    double width;
    double length;

  public:
    void setWidth(double w) {
      width = w;
    };
    void setLength(double l) {
      length = l;
    };
    double getWidth() const;
    double getLength() const;
    double getArea() const;
    double getPerimeter() const;

    Rectangle (double init_w, double init_l) {
      width = init_w;
      length = init_l;
    }


};

// Get width of rectangle
double Rectangle::getWidth() const {
  return width;
}

// Get length of rectangle
double Rectangle::getLength() const {
  return length;
}

// Get area of rectangle
double Rectangle::getArea() const {
  return length * width;
}

double Rectangle::getPerimeter() const {
  return 2 * (length * width);
}
