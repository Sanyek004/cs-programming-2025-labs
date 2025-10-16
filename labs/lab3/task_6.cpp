#include <iostream>
using namespace std;

int main() {
    long long n;
    if (!(cin >> n)) return 0;      // читаем верхнюю границу

    long long a = 0, b = 1;         // стартовая пара: 0, 1
    while (a <= n) {
        cout << a << ' ';           // выводим текущее число
        long long next = a + b;     // считаем следующее
        a = b;                      // сдвигаем пару
        b = next;
    }
    cout << '\n';
    return 0;
}
