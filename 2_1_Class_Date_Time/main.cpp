#include "DateTime.h"

int main() {
    Date date1, date2;
    Time time1, time2;

    // Тестирование ввода, установки и вывода даты
    std::cout << "Дата 1:" << std::endl;
    date1.Read();
    date1.Print();

    std::cout << "Дата 2:" << std::endl;
    date2.Read();
    date2.Print();

    // Тестирование сравнений дат
    if (date1.Equal(date2)) {
        std::cout << "Даты равны." << std::endl;
    } else if (date1.Less(date2)) {
        std::cout << "Дата 1 меньше Даты 2." << std::endl;
    } else if (date1.Greater(date2)) {
        std::cout << "Дата 1 больше Даты 2." << std::endl;
    }

    // Тестирование ввода, установки и вывода времени
    std::cout << "Время 1:" << std::endl;
    time1.Read();
    time1.Print();

    std::cout << "Время 2:" << std::endl;
    time2.Read();
    time2.Print();

    // Тестирование сравнений времени
    if (time1.Equal(time2)) {
        std::cout << "Время равно." << std::endl;
    } else if (time1.Less(time2)) {
        std::cout << "Время 1 меньше Времени 2." << std::endl;
    } else if (time1.Greater(time2)) {
        std::cout << "Время 1 больше Времени 2." << std::endl;
    }

    return 0;
}
