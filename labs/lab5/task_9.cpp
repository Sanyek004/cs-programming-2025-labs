#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main() {
    vector<string> words = {"яблоко", "груша", "банан", "киви", "апельсин", "ананас"};

    // Ключ - string (потому что русская буква - это 2 байта), Значение - вектор строк.
    map<string, vector<string>> grouped_words;

    for (const string& word : words) {
        if (word.empty()) continue;

        string first_letter;
        
        // Проверка: если первый бит 0 (ASCII), то 1 байт. Если нет — это UTF-8 (русский), берем 2 байта.
        unsigned char c = word[0];
        if (c < 128) {
            first_letter = word.substr(0, 1);
        } else {
            first_letter = word.substr(0, 2); 
        }

        grouped_words[first_letter].push_back(word);
    }

    cout << "{";
    
    bool is_first_key = true;
    for (const auto& entry : grouped_words) {
        if (!is_first_key) {
            cout << ", ";
        }
        

        cout << "'" << entry.first << "': [";


        bool is_first_word = true;
        for (const string& w : entry.second) {
            if (!is_first_word) {
                cout << ", ";
            }
            cout << "'" << w << "'";
            is_first_word = false;
        }
        
        cout << "]";
        is_first_key = false;
    }
    
    cout << "}" << endl;

    return 0;
}