#include <iostream>
#include <string> 

using namespace std;

int main() {    
    
    int input;
    cout << "Enter number: ";
    cin >> input;
    
    if (((input % 2 == 0) && (input % 3 == 0))) 
    {
        cout << input << " - delitsa na 6" << endl;
    }
    else
    {
            cout << input << " - NOT delitsa na 6" << endl;
    }
    
    return 0;
}