#include <iostream>
#include <cmath>

// Функція для обчислення факторіалу
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    double x;
    int n;

    // Введення значення x та n
    std::cout << "Введіть значення x: ";
    std::cin >> x;
    std::cout << "Введіть кількість елементів n: ";
    std::cin >> n;

    double result = 0.0;

    // Обчислення суми ряду
    for (int k = 1; k <= n; ++k) {
        double term = std::exp(k * M_PI) * std::pow(-M_PI + 2 * x, 2 * k) / factorial(2 * k);
        result -= term;  // Зверніть увагу на знак -
    }

    // Виведення результату
    std::cout << "Результат обчислення ряду: " << result << std::endl;

    return 0;
}
