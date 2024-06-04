//1.1. Разработайте структуры Date и Time и (перегруженные) функции Set, Print и Read для установки,
//печати и чтения с клавиатуры значений даты и времени. Предусмотрите возможность для уста
//новки времени нулевого значения секунд по умолчанию. Предусмотрите в функциях Set присваивание компонентам
//даты и времени только допустимых значений. Протестируйте их работу.
#include <iostream>
#include <iomanip>
#include <limits>

// Структура для даты
struct Date {
    int day;
    int month;
    int year;
};

// Функция для установки даты с проверкой корректности
void SetDate(Date& date, int d, int m, int y) {
    if (d >= 1 && d <= 31 && m >= 1 && m <= 12 && y >= 0) {
        date.day = d;
        date.month = m;
        date.year = y;
    } else {
        std::cerr << "Некорректная дата!" << std::endl;
    }
}

// Функция для вывода даты
void PrintDate(const Date& date) {
    std::cout << std::setw(2) << std::setfill('0') << date.day << "."
              << std::setw(2) << std::setfill('0') << date.month << "."
              << date.year << std::endl;
}

// Функция для чтения даты с клавиатуры
void ReadDate(Date& date) {
    int d, m, y;
    std::cout << "Введите дату (день месяц год): ";
    std::cin >> d >> m >> y;
    SetDate(date, d, m, y);
}

// Структура для времени
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Функция для установки времени с проверкой корректности и нулевым значением секунд по умолчанию
void SetTime(Time& time, int h, int min, int sec = 0) {
    if (h >= 0 && h < 24 && min >= 0 && min < 60 && sec >= 0 && sec < 60) {
        time.hours = h;
        time.minutes = min;
        time.seconds = sec;
    } else {
        std::cerr << "Некорректное время!" << std::endl;
    }
}

// Функция для вывода времени
void PrintTime(const Time& time) {
    std::cout << std::setw(2) << std::setfill('0') << time.hours << ":"
              << std::setw(2) << std::setfill('0') << time.minutes << ":"
              << std::setw(2) << std::setfill('0') << time.seconds << std::endl;
}

// Функция для чтения времени с клавиатуры
void ReadTime(Time& time) {
    int h, min, sec;
    std::cout << "Введите время (часы минуты секунды): ";
    std::cin >> h >> min >> sec;
    SetTime(time, h, min, sec);
}

int main() {
    Date date;
    Time time;

    // Тестирование ввода, установки и вывода даты
    ReadDate(date);
    PrintDate(date);
    //SetDate(date, 25, 12, 2023);
    //PrintDate(date);

    // Тестирование ввода, установки и вывода времени
    ReadTime(time);
    PrintTime(time);
    //SetTime(time, 14, 30);
    //PrintTime(time);
    //SetTime(time, 14, 30, 45);
    //PrintTime(time);

    return 0;
}
