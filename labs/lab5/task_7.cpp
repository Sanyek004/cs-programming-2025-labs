#include <iostream>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    
    map<string, string> words =
    {
        {"apple", "яблоко"},
        {"egg", "яйцо"},
        {"banana", "банан"}
    };

    
    string input = "";
    cout << "Enter english word: " << endl;
    getline(cin,input);

    auto it = words.find(input);

    // Проверяем, не пустой ли map
    if (it != words.end()) 
    {
        cout << "Translate: " << it->first << " - " << it->second << " ";
    }
    else
    {
        cout << "Error! Unknown word!";
    }

    return 0;
}