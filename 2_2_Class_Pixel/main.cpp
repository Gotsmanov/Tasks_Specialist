//2.2. Используя класс Point, разработайте класс Pixel (т.е. точка Point, имеющая цвет).
//Реализуйте методы Get..., Set..., Print, Read, Move, Dist.


#include <iostream>
#include <cmath>
#include <string>

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

class Pixel : public Point {
private:
    std::string color;

public:
    Pixel(int x = 0, int y = 0, const std::string& color = "black") : Point(x, y), color(color) {}

    std::string GetColor() const {
        return color;
    }

    void SetColor(const std::string& color) {
        this->color = color;
    }

    void Print() const {
        std::cout << "Pixel(" << x << ", " << y << ", " << color << ")" << std::endl;
    }

    void Read() {
        Point::Read();
        std::cout << "Enter color: ";
        std::cin >> color;
    }
};

int main() {
    // Создание точки и пикселя
    Point p1(1, 2);
    Pixel px1(3, 4, "red");

    // Вывод точек
    p1.Print();
    px1.Print();

    // Считывание новых данных для точки и пикселя
    p1.Read();
    px1.Read();

    // Вывод обновленных точек
    p1.Print();
    px1.Print();

    // Перемещение точек
    p1.Move(1, 1);
    px1.Move(1, 1);

    // Вывод перемещенных точек
    p1.Print();
    px1.Print();

    // Расстояние между двумя точками
    Point p2(4, 6);
    std::cout << "Distance between p1 and p2: " << p1.Dist(p2) << std::endl;

    // Изменение цвета пикселя
    px1.SetColor("blue");
    px1.Print();

    return 0;
}
