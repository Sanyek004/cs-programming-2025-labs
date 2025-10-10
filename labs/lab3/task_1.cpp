#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <locale.h>
using namespace std;

int main() 
{
    string name;
    int age;
    cout << "Name: ";
    cin >> name;
    cout << "Age: ";
    cin >> age;
    
    
    
    for (int i = 1; i <= 10; i++)
    {
        cout << i <<":";
        cout << name << " ---- " << age << endl;
    }
}