#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <numeric> // Для функции accumulate (сумма)
#include <iomanip> // Для setprecision (форматирование вывода)

using namespace std;

int main() {

    setlocale(LC_ALL, "");


    vector<pair<string, vector<int>>> students = {
        {"Анна", {5, 4, 5}},
        {"Иван", {3, 4, 4}},
        {"Мария", {5, 5, 5}}
    };

    // Создание словаря (map), где ключ - имя, значение - средняя оценка
    map<string, double> student_averages;

    for (const auto& student : students) {
        string name = student.first;
        vector<int> grades = student.second;

        double sum = 0;
        // Считаем сумму оценок
        for (int grade : grades) {
            sum += grade;
        }

        // Вычисляем среднее (проверяем, чтобы не делить на ноль)
        double average = 0.0;
        if (!grades.empty()) {
            average = sum / grades.size();
        }

        // Записываем в словарь
        student_averages[name] = average;
    }

    // Поиск студента с наибольшей средней оценкой
    string best_student_name;
    double max_average = -1.0;

    for (const auto& entry : student_averages) {
        if (entry.second > max_average) {
            max_average = entry.second;
            best_student_name = entry.first;
        }
    }

    // setprecision(1) используется, чтобы вывести "5.0", а не просто "5"
    cout << fixed << setprecision(1);
    cout << best_student_name << " имеет наивысший средний балл: " << max_average << endl;

    return 0;
}