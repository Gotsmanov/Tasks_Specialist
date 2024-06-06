//Для реализации перегрузки операторов вставки в поток ( <<) и извлечения из потока ( >>)
//для классов Dateи Time, мы добавляем соответствующие методы в заголовочный файл и определяем их в реализации.
//Этим операторам удобнее выводить объекты в выходной поток стандартного потока и считывать их из входного потока стандартного потока.

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

    // Перегрузка операторов сравнения
    bool operator==(const Date& other) const;
    bool operator!=(const Date& other) const;
    bool operator<(const Date& other) const;
    bool operator>(const Date& other) const;
    bool operator<=(const Date& other) const;
    bool operator>=(const Date& other) const;

    // Перегрузка операторов ввода/вывода
    friend std::ostream& operator<<(std::ostream& os, const Date& date);
    friend std::istream& operator>>(std::istream& is, Date& date);
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

    // Перегрузка операторов сравнения
    bool operator==(const Time& other) const;
    bool operator!=(const Time& other) const;
    bool operator<(const Time& other) const;
    bool operator>(const Time& other) const;
    bool operator<=(const Time& other) const;
    bool operator>=(const Time& other) const;

    // Перегрузка операторов ввода/вывода
    friend std::ostream& operator<<(std::ostream& os, const Time& time);
    friend std::istream& operator>>(std::istream& is, Time& time);
};

#endif // DATETIME_H
