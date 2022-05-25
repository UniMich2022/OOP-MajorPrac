#include "Shape.h"

Shape::Shape(){
    x = 0;
    y = 0;
}
Shape::~Shape(){
    
}
double Shape::get_x(){
    return x;
}
double Shape::get_y(){
    return y;
}
void Shape::set_x_y(double newX, double newY){
    x = newX;
    y = newY;
}