#include "Point.h"
#include <iostream>

using namespace std;

Point::Point(int x, int y)
    : x_(x), y_(y) {}

Point::Point(const Point& p)
    : x_(p.x_), y_(p.y_) {}

Point::~Point() {}

void Point::SetX(int x) {
    x_ = x;
}

void Point::SetY(int y) {
    y_ = y;
}

void Point::Move(int delta_x, int delta_y) {
    x_ += delta_x;
    y_ += delta_y;
}

double Point::Dist(const Point& p) const {
    int dx = x_ - p.x_;
    int dy = y_ - p.y_;
    return sqrt(dx * dx + dy * dy);
}

void Point::Print() const {
    cout << "(" << x_ << ", " << y_ << ")";
}

bool Point::Read(const char* txt) {
    if (txt) {
        cout << txt << endl;
    }
    cout << "Enter x and y coordinates: ";
    if (cin >> x_ >> y_) {
        return true;
    } else {
        cin.clear();
        while (cin.get() != '\n');
        return false;
    }
}
