#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Point.h"

class Rectangle {
public:
    Point left_bottom;
    Point right_top;

    Rectangle(){
        left_bottom = Point();
        right_top = Point();
    }

    Rectangle(Point a, Point b){
        left_bottom = a;
        right_top = b;
    }
};

#endif //RECTANGLE_H
