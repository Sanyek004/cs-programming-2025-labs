#include <iostream>
#include <array>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
    srand(time(NULL));
    
    array<string, 6> arr_str;

    for (int i = 0; i < 6; ++i)
    {
        // С вероятностью 20% добавим "мусор" (не число), чтобы проверить условие задачи
        if (rand() % 5 == 0) {
            arr_str[i] = "text";
        }
        else {
            arr_str[i] = to_string(rand() % 100); // Превращаем число в строку
        }
    }

    // Выводим текущий массив
    cout << "Tuple begin:" << endl;
    for (const string& val : arr_str)
    {
        cout << val << " ";
    }

    cout << endl;
    cout << endl;

    bool all_are_numbers = true;

    for (const string& str : arr_str) {
        // Проверяем каждый символ строки
        for (char c : str) {
            if (!isdigit(c)) { // Если символ не цифра
                all_are_numbers = false;
                break;
            }
        }
        if (!all_are_numbers) break; // Выходим из внешнего цикла, если нашли ошибку
    }

    if (all_are_numbers) {
        // Добавляем третий аргумент в функцию sort - компаратор.
        sort(arr_str.begin(), arr_str.end(), [](const string& a, const string& b) {
            // Преобразуем строки в числа (stoi) и сравниваем числа
            return stoi(a) < stoi(b);
        });

        cout << "Sorted Tuple:" << endl;
        for (const string& val : arr_str)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    else {
        // Если попалось "не число"
        cout << "Tuple remains unchanged (contains non-numbers)." << endl;
    }


    return 0;
}
