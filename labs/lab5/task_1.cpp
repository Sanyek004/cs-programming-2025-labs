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

    for (int i = 0; i < 10; ++i)
    {
        vec_int.push_back(rand() % 10); 
    }

    // Выводим текущий массив
    for (const_iter = vec_int.begin(); const_iter != vec_int.end(); ++const_iter)
    {
        cout << *const_iter << " ";
    }
    cout << endl;

    // Ищем число
    int old_value = 3;
    int new_value = 30;

    // Пробегаем итератором по всему вектору
    for (int_iter = vec_int.begin(); int_iter != vec_int.end(); ++int_iter)
    {
        // Если то, на что указывает итератор, равно 3
        if (*int_iter == old_value)
        {
            *int_iter = new_value; // Заменяем на 30
        }
    }

    // Выводим текущий массив с новым числом
    for (const_iter = vec_int.begin(); const_iter != vec_int.end(); ++const_iter)
    {
        cout << *const_iter << " ";
    }
    cout << endl;

    return 0;
}
