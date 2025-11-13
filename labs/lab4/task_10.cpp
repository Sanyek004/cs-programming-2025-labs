#include <iostream> 

using namespace std;

int main() {
    
    cout << "Enter number: ";
    int number;

    if (!(cin >> number)) {
        cout << "Error: That's not number" << endl;
        return 1; // Завершаем программу с кодом ошибки
    }

    bool isPrime = true; // По умолчанию считаем, что число простое.

    // Все, что меньше или равно 1 (включая 0 и отрицательные числа), не является простым.
    if (number <= 1) {
        isPrime = false;
    }
    else 
    {
        // Ищем делители.
        // Проверяем  делители от 2 до квадратного корня из числа.
        for (int i = 2; i * i <= number; ++i) {
            
            if (number % i == 0) {
                isPrime = false; 
                break; // Прерываем цикл, так как делитель уже найден
            }
            
        }
    }

    if (isPrime) {
        cout << number << " - simple number" << endl;
    } else {
        cout << number << " - sostavnoe number" << endl;
    }

    return 0;
}