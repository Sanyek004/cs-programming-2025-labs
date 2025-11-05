#include <iostream>
#include <string>
#include <sstream>
#include <limits>
using namespace std;

int main() {
    int input;
    cout << "Add number month: ";
    cin >> input;
    
    cout << endl;
    
    if (input == 12 || input == 1 || input == 2)
    {
        cout << "zima" << endl;
    }
    else if (input >= 3 && input <= 5)
    {
        cout << "vesna" << endl;
    }
    else if (input >= 6 && input <= 8)
    {
        cout << "leto" << endl;
    }
    else if (input >= 9 && input <= 11)
    {
        cout << "osen" << endl;
    }
    else
    {
        cout << "takogo tipa v nomere net!" << endl;        
    }
    
    return 0;
}