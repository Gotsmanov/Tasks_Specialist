#include <iostream>
#include "Pixel.h"
using namespace std;
void test(const Pixel &px)
{
    cout << "In test(const Pixel &px): ";
    px.Print(); cout << endl;
}
int main() {
    const Point origin(0,0); // origin.Move(1,1);
    cout << "Point origin: "; origin.Print(); cout << endl;
    cout << Pixel::GetCounter() << endl; {
        Pixel a(10,20,Pixel::blue), b(Point(20,30),Pixel::red);
        cout << a.GetCounter() << endl; cout << Pixel::GetCounter() << endl;
        Pixel c = a;
        c = a;
        test(a);
        cout << "Pixel a: "; a.Print(); cout << endl; cout << "Pixel b: "; b.Print(); cout << endl;
        b.Move(20,30);
        //b.SetColor(Pixel::green); // Эта строка приведет к ошибке компиляции
        cout << "Pixel b changed: "; b.Print(); cout << endl;
        cout << "Distance from "; a.Print(); cout << " to "; b.Print(); cout << " = " << a.Dist(b) << endl;
        cout << Pixel::GetCounter() << endl; }
    cout << Pixel::GetCounter() << endl; }
