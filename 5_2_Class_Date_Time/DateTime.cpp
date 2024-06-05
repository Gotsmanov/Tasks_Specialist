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
    std::cout << *this << std::endl;
}

bool Date::operator==(const Date& other) const {
    return day == other.day && month == other.month && year == other.year;
}

bool Date::operator!=(const Date& other) const {
    return !(*this == other);
}

bool Date::operator<(const Date& other) const {
    if (year < other.year) return true;
    if (year > other.year) return false;
    if (month < other.month) return true;
    if (month > other.month) return false;
    return day < other.day;
}

bool Date::operator>(const Date& other) const {
    return other < *this;
}

bool Date::operator<=(const Date& other) const {
    return !(other < *this);
}

bool Date::operator>=(const Date& other) const {
    return !(*this < other);
}

std::ostream& operator<<(std::ostream& os, const Date& date) {
    os << std::setw(2) << std::setfill('0') << date.day << "."
       << std::setw(2) << std::setfill('0') << date.month << "."
       << date.year;
    return os;
}

std::istream& operator>>(std::istream& is, Date& date) {
    int d, m, y;
    is >> d >> m >> y;
    date.Set(d, m, y);
    return is;
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
    std::cout << *this << std::endl;
}

bool Time::operator==(const Time& other) const {
    return hours == other.hours && minutes == other.minutes && seconds == other.seconds;
}

bool Time::operator!=(const Time& other) const {
    return !(*this == other);
}

bool Time::operator<(const Time& other) const {
    if (hours < other.hours) return true;
    if (hours > other.hours) return false;
    if (minutes < other.minutes) return true;
    if (minutes > other.minutes) return false;
    return seconds < other.seconds;
}

bool Time::operator>(const Time& other) const {
    return other < *this;
}

bool Time::operator<=(const Time& other) const {
    return !(other < *this);
}

bool Time::operator>=(const Time& other) const {
    return !(*this < other);
}

std::ostream& operator<<(std::ostream& os, const Time& time) {
    os << std::setw(2) << std::setfill('0') << time.hours << ":"
       << std::setw(2) << std::setfill('0') << time.minutes << ":"
       << std::setw(2) << std::setfill('0') << time.seconds;
    return os;
}

std::istream& operator>>(std::istream& is, Time& time) {
    int h, min, sec;
    is >> h >> min >> sec;
    time.Set(h, min, sec);
    return is;
}
