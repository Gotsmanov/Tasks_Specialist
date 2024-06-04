//3.1. Для классов Pixel и Line (задачи 2.2 и 2.3) реализуйте необходимые и полезные
//с Вашей точки зрения специальные методы класса. А какие методы Вы «доверите» сгенерировать компилятору?

//Конструктор по умолчанию (Pixel() = default;) доверен компилятору.
//Конструктор копирования (Pixel(const Pixel& other) = default;) доверен компилятору.
//Оператор присваивания (Pixel& operator=(const Pixel& other) = default;) доверен компилятору.
//Деструктор (~Pixel() = default;) доверен компилятору.
//Конструктор с параметрами (Pixel(int x, int y, const std::string& color) : Point(x, y), color(color) {}) определен явно, чтобы можно было инициализировать пиксель с заданными координатами и цветом.

#include <iostream>
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
    // Конструктор по умолчанию
    Pixel() = default;

    // Конструктор с параметрами
    Pixel(int x, int y, const std::string& color) : Point(x, y), color(color) {}

    // Конструктор копирования
    Pixel(const Pixel& other) = default;

    // Оператор присваивания
    Pixel& operator=(const Pixel& other) = default;

    // Деструктор
    ~Pixel() = default;

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
    // Создание пикселя
    Pixel px1(3, 4, "red");

    // Вывод пикселя
    px1.Print();

    // Считывание новых данных для пикселя
    px1.Read();

    // Вывод обновленного пикселя
    px1.Print();

    // Перемещение пикселя
    px1.Move(1, 1);

    // Вывод перемещенного пикселя
    px1.Print();

    // Изменение цвета пикселя
    px1.SetColor("blue");
    px1.Print();

    return 0;
}
