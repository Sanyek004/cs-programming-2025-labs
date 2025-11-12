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
        
    if (input >= 0 && input <= 5)
    {
        cout << "Night" << endl;
    }
    else if (input >= 6 && input <= 11)
    {
        cout << "Morning" << endl;
    }
    else if (input >= 12 && input <= 17)
    {
        cout << "Day" << endl;
    }
    else if (input >= 18 && input <= 23)
    {
        cout << "Evening" << endl;
    }
    else
    {
        cout << "KAVO!" << endl;        
    }
    
    return 0;
}