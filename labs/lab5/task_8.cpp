#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() {
    // Настройка локали для поддержки русского языка в консоли
    setlocale(LC_ALL, "");

    // Инициализация генератора случайных чисел
    srand(static_cast<unsigned int>(std::time(0)));

    // Список всех возможных вариантов
    vector<std::string> options = {"Камень", "Ножницы", "Бумага", "Ящерица", "Спок"};

    // Правила игры. Ключ побеждает всех, кто в списке значений (векторе).
    // Используем map для эмуляции словаря правил
    map<string, vector<string>> rules;
    rules["Ножницы"] = {"Бумага", "Ящерица"};
    rules["Бумага"] = {"Камень", "Спок"};
    rules["Камень"] = {"Ящерица", "Ножницы"};
    rules["Ящерица"] = {"Спок", "Бумага"};
    rules["Спок"] = {"Ножницы", "Камень"};

    int input_choice;
    string userChoice;
    cin >> input_choice;

    cout << "Варианты: Ножницы [1], Бумага [2], Камень [3], Ящерица [4], Спок [5]" << endl;
    switch(input_choice)
    {
        case 1:
            userChoice = "Ножницы";
            break;
        
        case 2:
            userChoice = "Бумага";
            break;
            
        case 3:
            userChoice = "Камень";
            break;
            
        case 4:
            userChoice = "Ящерица";
            break;
            
        case 5:
            userChoice = "Спок";
            break;
            
        default:
            cout << "ОШИБКА! НЕККОРЕКТНЫЙ ВВОД ВАРИАНТА!";
        
    }
    


    // Простая проверка валидности ввода (есть ли такой ключ в правилах)
    if (rules.find(userChoice) == rules.end()) {
        cout << "Ошибка: Некорректный ввод! Проверьте регистр (начинайте с большой буквы)." << endl;
    } else {
        // Генерация выбора компьютера
        int randomIndex = rand() % 5;
        string compChoice = options[randomIndex];

        cout << "Пользователь выбрал: " << userChoice << endl;
        cout << "Компьютер выбрал: " << compChoice << endl;

        if (userChoice == compChoice) {
            cout << "Результат: Ничья!" << endl;
        } else {
            // Проверяем, есть ли выбор компьютера в списке побежденных выбором игрока
            bool userWins = false;
            for (const auto& loser : rules[userChoice]) {
                if (loser == compChoice) {
                    userWins = true;
                    break;
                }
            }

            if (userWins) {
                cout << "Результат: Вы победили!" << endl;
            } else {
                cout << "Результат: Победил компьютер!" << endl;
            }
        }
    }

    return 0;
}