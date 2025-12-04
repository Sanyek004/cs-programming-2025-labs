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

    for (int i = 0; i < 5; ++i)
    {
        vec_int.push_back(rand() % 10); 
    }

    // Выводим текущий массив
    for (const_iter = vec_int.begin(); const_iter != vec_int.end(); ++const_iter)
    {
        cout << *const_iter << " ";
    }
    cout << endl;

    // Пробегаем итератором по всему вектору
    for (int_iter = vec_int.begin(); int_iter != vec_int.end(); ++int_iter)
    {
        // *int_iter — Доступ к самому значению числа через итератор
        // Мы берем значение (*int_iter), умножаем на (*int_iter) 
        // и записываем результат обратно в *int_iter
        *int_iter = (*int_iter) * (*int_iter);
    }

    // Выводим текущий массив с полученным результатом
    for (const_iter = vec_int.begin(); const_iter != vec_int.end(); ++const_iter)
    {
        cout << *const_iter << " ";
    }
    cout << endl;

    return 0;
}
