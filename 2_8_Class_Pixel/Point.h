#ifndef POINT_H
#define POINT_H

#include <cmath>
#include <iostream>

class Point {
public:
    Point(int x = 0, int y = 0);
    Point(const Point&);
    ~Point();

    int GetX() const { return x_; }
    int GetY() const { return y_; }
    void SetX(int x);
    void SetY(int y);
    void Move(int delta_x, int delta_y);
    double Dist(const Point&) const;
    void Print() const;
    bool Read(const char* txt = 0);

private:
    int x_;
    int y_;
};

#endif
