#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

double task_1(double num, char type_now, char type_translate);
double task_2(double sum, double age);
vector<unsigned int> task_3(int begin, int end);
vector<vector<int>> task_4(int rows_1, int cols_1, int rows_2, int cols_2, vector<int> data_matrix_1, vector<int> data_matrix_2);
void task_5(string input);

double task_1(double num, char type_now, char type_translate)
{
    if (type_now == 'h' && type_translate == 'm')
    {
        return num * 60;
    }
    else if (type_now == 'm' && type_translate == 'h')
    {
        return num / 60;
    }
    else if (type_now == 's' && type_translate == 'h')
    {
        return num / 3600;
    }
    else
    {
        cout << "ERROR CALL FUNCTION TASK_1: UNKNOWN TRANSLATE FROM " << type_now << " TO " << type_translate << endl;
        return 0;
    }
}

double task_2(double sum, double age)
{
    double sum_bonus = 0;

    if (sum < 30000)
    {
        cout << "Minimum deposit: 30k!";
        return 0;
    }

    if (sum > 10000)
    {
        // (int) отбрасывает дробную часть, чтобы считать полные десятки тысяч
        sum_bonus = (int)(sum / 10000) * 0.3;

        if (sum_bonus > 5.0)
        {
            sum_bonus = 5.0;
        }

    }

    double current_sum = sum;

    for (int i = 1; i <= age; i++)
    {
        double current_year_rate = sum_bonus; 

        
        if (i <= 3) 
        {
            current_year_rate += 3.0;
        }
        else if (i >= 4 && i <= 6) 
        {
            current_year_rate += 5.0;
        }
        else 
        {
            current_year_rate += 2.0;
        }

        current_sum += current_sum * (current_year_rate / 100.0);

        current_sum = round(current_sum * 100) / 100.0;
    }

    return current_sum - sum;
}

vector<unsigned int> task_3(int begin, int end)
{
    vector<unsigned int> task_3;

    if (end < 2) 
    {
        cout << "Error!";
        return task_3;
    }

    if (begin < 2) {
        begin = 2;
    }

    for (int n = begin; n <= end; ++n) 
    {
        bool is_prime = true;
        
        for (int i = 2; i * i <= n; ++i) 
        {
            if (n % i == 0) 
            {
                is_prime = false;
                break;
            }
        }

        if (is_prime) 
        {
            task_3.push_back(n);
        }
    }


    cout << "Simple numbers: ";
    for (auto it = task_3.begin(); it != task_3.end(); it++)
    {
        cout << " " << *it << " ";
    }

    return task_3;

}

vector<vector<int>> task_4(int rows_1, int cols_1, int rows_2, int cols_2, vector<int> data_matrix_1, vector<int> data_matrix_2)
{
    vector<vector<int>> result_matrix(rows_1, vector<int>(cols_1));

    if (rows_1 != rows_2 || cols_1 != cols_2)
    {
        cout << "Error! Not similar rows and cols!" << endl;

        return result_matrix;
    }


    if (rows_1 < 2 || cols_1 < 2)
    {
        cout << "Error! Matrix lower than 2x2!" << endl;
        return result_matrix;
    }


    for (int i = 0; i < rows_1; i++)
    {
        for (int j = 0; j < cols_1; j++)
        {
            int flat_index = i * cols_1 + j;

            result_matrix[i][j] = data_matrix_1[flat_index] + data_matrix_2[flat_index];
        }
    }

    cout << "Matrix 1:" << endl;
    for (auto it_data_m1 = data_matrix_1.begin(); it_data_m1 != data_matrix_1.end(); it_data_m1++)
    {
        cout << *it_data_m1 << " ";
    }

    cout << endl;

    cout << "Matrix 2:" << endl;
    for (auto it_data_m2 = data_matrix_2.begin(); it_data_m2 != data_matrix_2.end(); it_data_m2++)
    {
        cout << *it_data_m2 << " ";
    }

    cout << endl;

    cout << "Result: " << endl;

    for (auto it_row = result_matrix.begin(); it_row != result_matrix.end(); it_row++)
    {
        for (auto it_col = it_row->begin(); it_col != it_row->end(); it_col++)
        {
            cout << *it_col << " ";
        }

        cout << endl;
    }

    return result_matrix;
}

// Функция подсчета реальных символов (глифов) в UTF-8
vector<string> split_utf8(const string& str) {
    vector<string> symbols;
    for (size_t i = 0; i < str.length(); ) {
        unsigned char c = str[i];
        size_t char_len = 0;

        // Определение длины символа UTF-8 по первому байту
        if ((c & 0x80) == 0) char_len = 1;        // ASCII (английский)
        else if ((c & 0xE0) == 0xC0) char_len = 2; // Кириллица и др.
        else if ((c & 0xF0) == 0xE0) char_len = 3;
        else if ((c & 0xF8) == 0xF0) char_len = 4;
        else char_len = 1; // Если байт поврежден, считаем как 1

        // Добавляем кусочек строки (один символ) в вектор
        symbols.push_back(str.substr(i, char_len));
        i += char_len;
    }
    return symbols;
}

// Вспомогательная функция для приведения к нижнему регистру
string to_lower_utf8(string s) {
    // Если это английская буква A-Z
    if (s.size() == 1 && s[0] >= 'A' && s[0] <= 'Z') {
        s[0] = s[0] + 32;
    }
    return s;
}

void task_5(string input)
{
    // 1. Разбиваем на символы
    vector<string> raw_chars = split_utf8(input);

    // 2. Чистим: убираем пробелы и приводим к нижнему регистру 
    vector<string> clean_chars;
    for (const string& s : raw_chars) 
    {
        if (s != " ") // Игнорируем пробелы
        { 
            clean_chars.push_back(to_lower_utf8(s));
        }
    }

    // 3. Создаем копию и переворачиваем
    vector<string> reversed_chars = clean_chars;
    reverse(reversed_chars.begin(), reversed_chars.end());

    // 4. Сравниваем содержимое
    if (clean_chars == reversed_chars) {
        cout << "Да, это палиндром: " << input << endl;
    }
    else {
        cout << "Нет, это не палиндром: " << input << endl;
    }
}


int main()
{
    setlocale(LC_ALL, "");

    double res_1 = task_1(12, 's', 'm');
    double res_2 = task_2(200000, 8);
    task_3(0,1);
    
    vector<int> res_4_1 = { 2,5,5,3 };
    vector<int> res_4_2 = { 5,2,4,1 };
    task_4(2, 2, 2, 2, res_4_1, res_4_2);

    task_5("Алфавитный порядок");

    cout << "Result TASK_1: " << res_1 << endl;
    cout << "Result TASK_2: " << fixed << setprecision(2) << res_2 << endl;

    return 0;
}