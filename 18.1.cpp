#include <iostream>
#include <cmath>

using namespace std;

void geometry18() {
    const float pi = 3.1415; // Визначає константу π.
    float r; // Оголошує змінну r для радіусу фігур.
    cout << "Введiть радiус: ";
    cin >> r;

    float perimeter1 = 2 * r + r * sqrt(2); // Обчислення периметру та площі трикутника.
    float square1 = r * r / 2;

    float perimeter2 = (pi * r * 45 / 180) + r + r * sqrt(2) - r; // Обчислення периметру та площі незвичайної фігури.
    float square2 = fabs(r * r / 2 - pi * r * r / 2 - r * r - pi * r * r / 4);

    int choice = 0; //Оголошення змінної для вибору користувача.
    cout << "Оберіть площу та периметр якої фігури знаходитемо:" << endl << "1. Трикутник" << endl << "2. Незвична фігура";
    cin >> choice; //Зчитує вибір користувача.

    if (choice == 1) {  // Перевірка вибору користувача та вивід результатів для обраної фігури.
        cout << "Периметр трикутника - " << perimeter1 << endl;
        cout << "Площа трикутника - " << square1 << endl;
    }
    else if (choice == 2) {
        cout << "Периметр другої фігури - " << perimeter2 << endl;
        cout << "Площа другої фігури - " << square2 << endl;
    }
    else {
        cout << "Такого варіанту немає";
    }
}

int main() {
    geometry18();
    return 0;
}