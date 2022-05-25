#ifndef SHAPE_H
#define SHAPE_H

class Shape{
    protected:
        double x;
        double y;
    public:
        Shape();
        ~Shape();
        virtual double getArea() = 0;
        double get_x();
        double get_y();
        void set_x_y(double x, double y);
};

#endif