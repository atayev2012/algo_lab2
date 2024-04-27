#ifndef DATA_GENERATORS_H
#define DATA_GENERATORS_H
#include <vector>
#include "../objects/Rectangle.h"

std::vector<Rectangle> get_rectangles(int rectangle_qty, int step=2);
std::vector<Point> get_points(int point_qty, int x_basis, int y_basis);

#endif //DATA_GENERATORS_H
