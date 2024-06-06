#include <iostream>
#include "Pixel.h"

using namespace std;

void test(const Pixel& px) {
    cout << "In test(const Pixel &px): ";
    px.Print();
    cout << endl;
}

int main() {
    const Point origin(0, 0);
    cout << "Point origin: ";
    origin.Print();
    cout << endl;
    cout << "Number of pixels: " << Pixel::GetCounter() << endl;

    {
        Pixel a(10, 20, Pixel::blue), b(Point(20, 30), Pixel::red);
        cout << "Number of pixels: " << Pixel::GetCounter() << endl;

        Pixel c = a;
        c = a;
        test(a);

        cout << "Pixel a: ";
        a.Print();
        cout << endl;
        cout << "Pixel b: ";
        b.Print();
        cout << endl;

        // Демонстрация методов Draw и Erase
        a.Draw();
        b.Draw();
        b.Move(20, 30);
        b.Erase();

        cout << "Pixel b moved and erased: ";
        b.Print();
        cout << endl;

        cout << "Distance from ";
        a.Print();
        cout << " to ";
        b.Print();
        cout << " = " << a.Dist(b) << endl;

        cout << "Number of pixels: " << Pixel::GetCounter() << endl;
    }

    cout << "Number of pixels: " << Pixel::GetCounter() << endl;
}
