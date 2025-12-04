#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main() {
    // Имеется список произвольных элементов (например, строк)
    vector<string> myList = { "apple", "banana", "cherry", "date" };

    // Создаем словарь (map), где ключ и значение — строки
    map<string, string> myDict;

    // Заполняем словарь: каждый элемент становится и ключом, и значением
    for (const auto& item : myList) {
        myDict[item] = item;
    }

    // Вывод результата для проверки
    cout << "Result (key -> item):\n";
    for (const auto& pair : myDict) {
        cout << pair.first << " -> " << pair.second << "\n";
    }

    return 0;
}