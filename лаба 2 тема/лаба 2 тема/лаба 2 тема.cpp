#include <iostream>
#include <cmath>
#include <Windows.h>

int main() {
    int a, b, c, d;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Введіть значення a, b, c та d: ";
    std::cin >> a >> b >> c >> d;

    int A_c = a / c;
    int B_c = b / c;
    int C_c = c / c;
    int result = 0;

    if ((A_c & B_c) || (A_c & C_c)) {
        if (c < 0 && b != 0) {
            result = a * std::pow(c, 2) + b * std::pow(c, 2);
        }
        else if (c > 0 && b == 0) {
            result = (c - a) * (c + c - c) * 6;
        }
    }

    if (result == 0) {
        std::cout << "Дійсне значення" << std::endl;
    }
    else {
        std::cout << "Результат: " << result << std::endl;
    }

    return 0;
}
