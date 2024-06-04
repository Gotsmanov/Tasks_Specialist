#ifndef POINT_H
#define POINT_H
class Point {
protected:
    int x;
    int y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    int GetX() const {
        return x;
    }

    int GetY() const {
        return y;
    }

    void SetX(int x) {
        this->x = x;
    }

    void SetY(int y) {
        this->y = y;
    }

    void Print() const {
        std::cout << "Point(" << x << ", " << y << ")" << std::endl;
    }

    void Read() {
        std::cout << "Enter x: ";
        std::cin >> x;
        std::cout << "Enter y: ";
        std::cin >> y;
    }

    void Move(int dx, int dy) {
        x += dx;
        y += dy;
    }

    double Dist(const Point& other) const {
        return std::sqrt((x - other.x) * (x - other.x) + (y - other.y) * (y - other.y));
    }
};
#endif
