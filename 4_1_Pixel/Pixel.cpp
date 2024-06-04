//закомменченные строки - те, которые пытаются изменить цвет пикселя


#include <iostream>
#include "Pixel.h"
using namespace std;
int Pixel::cnt_ = 0;
Pixel::Pixel(const Point &p, const Color &c)
    :p_(p), c_(c)
{
    ++cnt_; }
Pixel::Pixel(int x, int y, const Color &c)
    :p_(x,y), c_(c)
{
    ++cnt_; }
Pixel::Pixel(const Pixel &px)
    :p_(px.p_), c_(px.c_)
{
    ++cnt_; }
Pixel::~Pixel()
{
    --cnt_; }
void Pixel::SetX(int x)
{
    p_.SetX(x);
}
void Pixel::SetY(int y)
{
    p_.SetY(y);
}
void Pixel::Move(int delta_x, int delta_y) {
    p_.Move(delta_x,delta_y);
}
double Pixel::Dist(const Pixel &px) const {
    return p_.Dist(px.p_);
}
void Pixel::Print() const
{

    p_.Print(); cout << c_;
}
bool Pixel::Read(const char *txt) {
    // if(p_.Read(txt) && cin >> (int&)c_ ) return true; // cin >> (int&)c_ пытается изменить const поле, что приведет к ошибке компиляции
    if (!cin) {
    if(!cin) {cin.clear(); while(cin.get() != '\n');}
    return false;
}
const Pixel::Color &Pixel::GetColor() const
{
    return c_; }
//void Pixel::SetColor(const Color &c) // Этот метод больше не имеет смысла, так как цвет теперь const
//{
//    c_ = c;
//}
