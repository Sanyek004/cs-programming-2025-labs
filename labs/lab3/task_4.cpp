#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <locale.h>
using namespace std;

int main() 
{
    int n;
    long long factorial = 1;
    
    cout << "Number: ";
    cin >> n;
    
    if (n < 0)
    {
        cout << "Factorial number is negative!";
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        
        cout << "Factorial number " << n << " = " << factorial << endl;
    }
}