#ifndef SHAPE_H
#define SHAPE_H

class Shape {
 protected:
  double x;
  double y;

 public:
  Shape();                           // Constructor
  virtual double getArea() = 0;      // pure virtual function
  double get_x();                    // Returns x
  double get_y();                    // Returns y
  void set_x_y(double x, double y);  // Sets x and y
};

#endif