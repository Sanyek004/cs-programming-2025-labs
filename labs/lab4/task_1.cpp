#include <iostream>
#include <string>
#include <sstream>
#include <limits>
using namespace std;

int main() {
    int input;
    cout << "Add temperature: ";
    cin >> input;
    
    cout << endl;
    
    if (input >= 20)
    {
        cout << "Condition is ON" << endl;
    }
    else
    {
        cout << "Condition is OFF" << endl;
    }
    
    return 0;
}