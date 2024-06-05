#ifndef DATETIME_H
#define DATETIME_H

#include <iostream>
#include <iomanip>

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Конструкторы
    Date();
    Date(int d, int m, int y);

    // Методы установки
    void Set(int d, int m, int y);

    // Методы получения
    int GetDay() const;
    int GetMonth() const;
    int GetYear() const;

    // Методы вывода
    void Print() const;

    // Методы сравнения
    bool Equal(const Date& other) const;
    bool Less(const Date& other) const;
    bool Greater(const Date& other) const;

    // Метод чтения с клавиатуры
    void Read();
};

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Конструкторы
    Time();
    Time(int h, int min, int sec = 0);

    // Методы установки
    void Set(int h, int min, int sec = 0);

    // Методы получения
    int GetHours() const;
    int GetMinutes() const;
    int GetSeconds() const;

    // Методы вывода
    void Print() const;

    // Методы сравнения
    bool Equal(const Time& other) const;
    bool Less(const Time& other) const;
    bool Greater(const Time& other) const;

    // Метод чтения с клавиатуры
    void Read();
};

#endif // DATETIME_H
