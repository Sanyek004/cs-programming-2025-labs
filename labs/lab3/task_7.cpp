#include <iostream>
#include <string>
using namespace std;

int main() {
    // Оригинальная строка (используем латиницу, как вы и просили)
    string input_str = "Privet";
    
    // Новая строка для результата
    string output_str;

    // Перебираем символы оригинальной строки с помощью цикла for
    for (int i = 0; i < input_str.length(); ++i) {
        // Добавляем к новой строке текущий символ
        output_str += input_str[i];
        
        // Добавляем номер символа (индекс i + 1, так как нумерация с 1)
        output_str += to_string(i + 1);
    }

    // Выводим результат на экран
    cout << output_str << std::endl;

    return 0;
}