#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));

    vector<int> vec_int;
    vector<int>::iterator int_iter;
    vector<int>::const_iterator const_iter;

    for (int i = 0; i < 6; ++i)
    {
        vec_int.push_back(rand() % 100);
    }

    // Выводим текущий массив
    for (const_iter = vec_int.begin(); const_iter != vec_int.end(); ++const_iter)
    {
        cout << *const_iter << " ";
    }
    cout << endl;

    // Предположим что максимальный элемент числа - Первый элемент
    int max_value = vec_int[0];

    // Пробегаем итератором по всему вектору
    for (int_iter = vec_int.begin(); int_iter != vec_int.end(); ++int_iter)
    {
        // Разыменовываем итератор (*int_iter), чтобы получить число.
        // Сравниваем его с текущим max.
        if (*int_iter > max_value)
        {
            // Если текущее число больше, обновляем максимум.
            max_value = *int_iter;
        }
    }

    int length_vec = vec_int.size();
    int math_operation = max_value / length_vec;

    cout << "Max value in vector: " << max_value << endl;
    cout << "Result: " << math_operation;

    return 0;
}
