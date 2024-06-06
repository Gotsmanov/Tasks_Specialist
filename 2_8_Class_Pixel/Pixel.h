#ifndef PIXEL_H
#define PIXEL_H

#include "Point.h"
#include <iostream>

class Pixel : public Point {
public:
    enum Color { black, blue, green, red = 4, white = 15 };

    Pixel(const Point& p, const Color& c = black);
    Pixel(int x = 0, int y = 0, const Color& c = black);
    Pixel(const Pixel&);
    ~Pixel();

    int GetX() const { return p_.GetX(); }
    int GetY() const { return p_.GetY(); }
    void SetX(int x);
    void SetY(int y);
    void Move(int delta_x, int delta_y);
    double Dist(const Pixel&) const;
    const Color& GetColor() const;
    void Print() const;
    bool Read(const char* txt = 0);
    static int GetCounter() { return cnt_; }

    void Draw() const;  // Метод для рисования пикселя
    void Erase() const; // Метод для стирания пикселя

private:
    Point p_;
    Color c_;
    static int cnt_;
};

#endif
