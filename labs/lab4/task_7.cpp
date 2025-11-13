#include <iostream>
#include <string> 

using namespace std;

int main() {    
    
    int input_1;
    cout << "Enter number 1: ";
    cin >> input_1;
    
    int input_2;
    cout << "Enter number 2: ";
    cin >> input_2;
    
    int input_3;
    cout << "Enter number 3: ";
    cin >> input_3;
    
    int res = input_1; 
    
    
    if (input_2 < res)
    {
        res = input_2;
    }
    
    
    if (input_3 < res)
    {
        res = input_3; 
    }
    
    cout << "Less number: " << res;
    
    return 0;
}