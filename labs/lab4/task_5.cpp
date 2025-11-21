#include <iostream>
#include <string> 

using namespace std;

int main() {    
    string password;
    
    cout << "Enter password: ";
    
    getline(cin, password);

    // Флаги для отслеживания каждого условия
    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSpecial = false;
    bool goodLength = false;

    // Проверка длины
    if (password.length() >= 8) {
        goodLength = true;
    }

    for (int i = 0; i < password.length(); ++i) {
        char c = password[i]; // Получаем символ

        if (c >= 'A' && c <= 'Z') {
            hasUpper = true;
        } 
        else if (c >= 'a' && c <= 'z') {
            hasLower = true;
        } 
        else if (c >= '0' && c <= '9') {
            hasDigit = true;
        } 
        // Если символ не является ничем из вышеперечисленного,
        // мы считаем его специальным (включая пробелы, пунктуацию и т.д.)
        else {
            hasSpecial = true;
        }
    }

   
    if (goodLength && hasUpper && hasLower && hasDigit && hasSpecial) {
        cout << "Password is secure." << std::endl;
    } else {
        // Если пароль ненадежный, собираем строку с ошибками
        cout << "Password is not secure: ";
        
        string errors;

        if (!goodLength) {
            errors += "length is less than 8 symbols";
        }
        if (!hasUpper) {
            // Метод string::empty() проверяет, пустая ли строка
            if (!errors.empty()) {
                errors += ", "; // Добавляем разделитель
            }
            errors += "missing uppercase letters";
        }
        if (!hasLower) {
            if (!errors.empty()) {
                errors += ", ";
            }
            errors += "missing lowercase letters";
        }
        if (!hasDigit) {
            if (!errors.empty()) {
                errors += ", ";
            }
            errors += "missing numbers";
        }
        if (!hasSpecial) {
            if (!errors.empty()) {
                errors += ", ";
            }
            errors += "missing special characters";
        }
        
        // Выводим собранные ошибки
        cout << errors << "." << endl;
    }

    return 0;
}