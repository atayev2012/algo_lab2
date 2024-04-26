#ifndef POINT_H
#define POINT_H

class Point {
public:
    int x, y;

    Point(){
        x = 0;
        y = 0;
    }

    Point(int a, int b){
        x = a;
        y = b;
    }
};

#endif //POINT_H
