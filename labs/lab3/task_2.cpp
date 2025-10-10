#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <locale.h>
using namespace std;

int main() 
{
    int num;
    cout << "Num: ";
    cin >> num;
    
    
    for (int i = 1; i <= 9; i++)
    {
        cout << " | " << i << " * " << num << " = " << i * num  << " | ";
        cout << endl;
    }
}