//2.3. Разработайте класс Line (отрезок на плоскости), заданный его конечными точками (используйте
//класс Point). Реализуйте методы: Get..., Set..., Print, Read, Move, Length, Center.


#include <iostream>
#include <cmath>

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

class Line {
private:
    Point start;
    Point end;

public:
    Line(Point start = Point(), Point end = Point()) : start(start), end(end) {}

    Point GetStart() const {
        return start;
    }

    Point GetEnd() const {
        return end;
    }

    void SetStart(const Point& start) {
        this->start = start;
    }

    void SetEnd(const Point& end) {
        this->end = end;
    }

    void Print() const {
        std::cout << "Line from ";
        start.Print();
        std::cout << " to ";
        end.Print();
    }

    void Read() {
        std::cout << "Enter start point:" << std::endl;
        start.Read();
        std::cout << "Enter end point:" << std::endl;
        end.Read();
    }

    void Move(int dx, int dy) {
        start.Move(dx, dy);
        end.Move(dx, dy);
    }

    double Length() const {
        return start.Dist(end);
    }

    Point Center() const {
        int centerX = (start.GetX() + end.GetX()) / 2;
        int centerY = (start.GetY() + end.GetY()) / 2;
        return Point(centerX, centerY);
    }
};

int main() {
    // Создание отрезка
    Point p1(1, 2);
    Point p2(3, 4);
    Line line(p1, p2);

    // Вывод отрезка
    line.Print();

    // Считывание новых данных для отрезка
    line.Read();

    // Вывод обновленного отрезка
    line.Print();

    // Перемещение отрезка
    line.Move(1, 1);

    // Вывод перемещенного отрезка
    line.Print();

    // Длина отрезка
    std::cout << "Length of line: " << line.Length() << std::endl;

    // Центр отрезка
    Point center = line.Center();
    std::cout << "Center of line: ";
    center.Print();

    return 0;
}
