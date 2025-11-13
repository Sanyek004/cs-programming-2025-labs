#include <iostream> 

using namespace std;

int main() {

    double dogAge; // Переменная для хранения возраста собаки (используем double для 10.5)
    double humanAge; // Переменная для результата

    cout << "Enter age (in years): ";
    cin >> dogAge;

    if (cin.fail()) {
        cout << "Error: That's not number" << endl;
        return 1; // Выход из программы с кодом ошибки
    }

    if (dogAge < 1) {
        cout << "Error: Age not 1" << endl;
        return 1; // Выход из программы с кодом ошибки
    }

    if (dogAge > 22) {
        cout << "Error: Age not more 22" << endl;
        return 1; // Выход из программы с кодом ошибки
    }

    if (dogAge <= 2) {
        humanAge = dogAge * 10.5;
    } else {
        // Если собаке больше 2 лет:
        // 1. Берем 21 год за первые два (2 * 10.5)
        // 2. Вычитаем эти 2 года из общего возраста
        // 3. Умножаем оставшиеся годы на 4
        // 4. Складываем результат с 21
        humanAge = 21.0 + (dogAge - 2.0) * 4.0;
    }

    // Устанавливаем формат вывода, чтобы всегда показывать одну цифру
    // после запятой (например, 33.0 вместо 33)
    cout.setf(ios::fixed); // Включить fixed-point нотацию
    cout.precision(1);     // Установить 1 знак после запятой

    cout << "Age dog in human years: " << humanAge << endl;

    return 0; 
}