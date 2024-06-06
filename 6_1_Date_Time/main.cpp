#include "DateTime.h"

int main() {
    Date date1, date2;
    Time time1, time2;

    // Тестирование ввода, установки и вывода даты
    std::cout << "Введите дату 1 (день месяц год): ";
    std::cin >> date1;
    std::cout << "Дата 1: " << date1 << std::endl;

    std::cout << "Введите дату 2 (день месяц год): ";
    std::cin >> date2;
    std::cout << "Дата 2: " << date2 << std::endl;

    // Тестирование сравнений дат
    if (date1 == date2) {
        std::cout << "Даты равны." << std::endl;
    } else if (date1 < date2) {
        std::cout << "Дата 1 меньше Даты 2." << std::endl;
    } else if (date1 > date2) {
        std::cout << "Дата 1 больше Даты 2." << std::endl;
    }

    // Тестирование ввода, установки и вывода времени
    std::cout << "Введите время 1 (часы минуты секунды): ";
    std::cin >> time1;
    std::cout << "Время 1: " << time1 << std::endl;

    std::cout << "Введите время 2 (часы минуты секунды): ";
    std::cin >> time2;
    std::cout << "Время 2: " << time2 << std::endl;

    // Тестирование сравнений времени
    if (time1 == time2) {
        std::cout << "Время равно." << std::endl;
    } else if (time1 < time2) {
        std::cout << "Время 1 меньше Времени 2." << std::endl;
    } else if (time1 > time2) {
        std::cout << "Время 1 больше Времени 2." << std::endl;
    }

    return 0;
}
