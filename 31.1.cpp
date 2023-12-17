#include <iostream>
#include <cmath>

// Функція для обчислення n-го члена ряду
double calculateTerm(int n, double x) {
    return std::pow((2.0 + n), 3.0) / (std::tgamma(x) * std::pow(2.0, 2 * n + 1));
}

int main() {
    double x;

    // Введення значення x
    std::cout << "Введіть значення x: ";
    std::cin >> x;

    // Обчислення тесту Даламбера
    double D;
    for (int n = 1; n < 1000; ++n) {  // Використовуємо n = 1000 для наближеного обчислення границі
        double term1 = calculateTerm(n, x);
        double term2 = calculateTerm(n + 1, x);

        D = std::abs(term2 / term1);

        if (D < 1) {
            std::cout << "Ряд збігається (D < 1)" << std::endl;
            break;
        } else if (D > 1) {
            std::cout << "Ряд розбігається (D > 1)" << std::endl;
            break;
        }
    }

    return 0;
}
