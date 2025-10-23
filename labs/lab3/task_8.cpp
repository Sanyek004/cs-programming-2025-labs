#include <iostream>
#include <string>
using namespace std;

int main() {
    int input_1, input_2;
    bool programm = true;
    
    while (programm = true)
    {
        cout << "Enter two numbers: ";
        cin >> input_1 >> input_2;
        cout << endl;
        cout << "Result: " << input_1 + input_2 << endl;
    }
    
    return 0;
}
