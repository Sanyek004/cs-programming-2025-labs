#include <iostream>
#include <string> 

using namespace std;

int main() {    
    
    int input;
    cout << "Enter number: ";
    cin >> input;
    
    if (((input % 4 == 0) && (input % 100 != 0)) || (input % 400 == 0)) 
    {
        cout << input << " - visokos year" << endl;
    }
    else
    {
            cout << input << " - NOT visokos year" << endl;
    }
    
    return 0;
}