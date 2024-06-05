#include "DateTime.h"

// Реализация методов класса Date

Date::Date() : day(1), month(1), year(2000) {}

Date::Date(int d, int m, int y) {
    Set(d, m, y);
}

void Date::Set(int d, int m, int y) {
    if (d >= 1 && d <= 31 && m >= 1 && m <= 12 && y >= 0) {
        day = d;
        month = m;
        year = y;
    } else {
        std::cerr << "Некорректная дата!" << std::endl;
    }
}

int Date::GetDay() const {
    return day;
}

int Date::GetMonth() const {
    return month;
}

int Date::GetYear() const {
    return year;
}

void Date::Print() const {
    std::cout << std::setw(2) << std::setfill('0') << day << "."
              << std::setw(2) << std::setfill('0') << month << "."
              << year << std::endl;
}

bool Date::Equal(const Date& other) const {
    return day == other.day && month == other.month && year == other.year;
}

bool Date::Less(const Date& other) const {
    if (year < other.year) return true;
    if (year > other.year) return false;
    if (month < other.month) return true;
    if (month > other.month) return false;
    return day < other.day;
}

bool Date::Greater(const Date& other) const {
    if (year > other.year) return true;
    if (year < other.year) return false;
    if (month > other.month) return true;
    if (month < other.month) return false;
    return day > other.day;
}

void Date::Read() {
    int d, m, y;
    std::cout << "Введите дату (день месяц год): ";
    std::cin >> d >> m >> y;
    Set(d, m, y);
}

// Реализация методов класса Time

Time::Time() : hours(0), minutes(0), seconds(0) {}

Time::Time(int h, int min, int sec) {
    Set(h, min, sec);
}

void Time::Set(int h, int min, int sec) {
    if (h >= 0 && h < 24 && min >= 0 && min < 60 && sec >= 0 && sec < 60) {
        hours = h;
        minutes = min;
        seconds = sec;
    } else {
        std::cerr << "Некорректное время!" << std::endl;
    }
}

int Time::GetHours() const {
    return hours;
}

int Time::GetMinutes() const {
    return minutes;
}

int Time::GetSeconds() const {
    return seconds;
}

void Time::Print() const {
    std::cout << std::setw(2) << std::setfill('0') << hours << ":"
              << std::setw(2) << std::setfill('0') << minutes << ":"
              << std::setw(2) << std::setfill('0') << seconds << std::endl;
}

bool Time::Equal(const Time& other) const {
    return hours == other.hours && minutes == other.minutes && seconds == other.seconds;
}

bool Time::Less(const Time& other) const {
    if (hours < other.hours) return true;
    if (hours > other.hours) return false;
    if (minutes < other.minutes) return true;
    if (minutes > other.minutes) return false;
    return seconds < other.seconds;
}

bool Time::Greater(const Time& other) const {
    if (hours > other.hours) return true;
    if (hours < other.hours) return false;
    if (minutes > other.minutes) return true;
    if (minutes < other.minutes) return false;
    return seconds > other.seconds;
}

void Time::Read() {
    int h, min, sec;
    std::cout << "Введите время (часы минуты секунды): ";
    std::cin >> h >> min >> sec;
    Set(h, min, sec);
}
