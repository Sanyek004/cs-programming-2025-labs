#include <iostream>
#include <string>
#include <sstream>
#include <limits>
using namespace std;

int main() {
    // First  task
    int num;
    float decimal_num;
    string str;
    bool logic;
    
    // Second task
    cout << "Second task: " << endl;
    string name = "Alexander";
    int age = 21;
    cout << name << endl;
    cout << age << endl;
    
    // Third task
    cout << "Third task: " << endl;
    int one_num = 342;
    float second_num = 56.2;
    string third_num = "43";
    cout << one_num << endl;
    cout << second_num << endl;
    cout << third_num << endl;
    
    
    // Fourth task
    cout << "Fourth task: " << endl;    
    int a = 3;
    int b = 8;
    
    int res =  (a + (4 * b)) * (a - (3 * b)) + a * a;
    cout << res << endl;
    
    // Fiveth task
    int input_a;
    int input_b;
    cout << "Enter A for S square: " << endl;
    cin >> input_a ;
    cout << endl;
    cout << "Enter B for S square: " << endl;
    cin >> input_b;
    cout << endl;
    cout << "Fiveth task: " << endl;   
    int S = input_a * input_b;
    cout << "S = " << S << endl;
    
    // Sixth task
    string first_str = "*   *   *";
    string second_str = "* * * *";
    string third_str = "*   *";
    
    cout << "Sith task: " << endl;  
    cout << first_str << endl;
    cout << second_str << endl;
    cout << third_str << endl;
    
    // Seventh task
    cout << "Seventh task: " << endl; 
    int seven_task_int1 = 15;
    int seven_task_int2 = 4;
    // Arithmetic operators
    int plus = a + b;
    int minus = a - b;
    int multiplication = a * b;
    int division = a / b;
    int ostatok = a % b;
    int increment_a = a++;
    int increment_b = b++;
    int decrement_a = a--;
    int decrement_b = b--;
    
    // Comparison operators       
    int ravno = a == b;
    int not_ravno = a != b;
    int more = a > b;
    int less = a < b;
    
    
    // Eighth task
    cout << "My name is " << name << " , I am  "<< age << " years old" << endl;
    
    // Tenth task
    string yes = "Yes!";
    string no = "No!";
    
    for (int i = 0; i < 4; i++)
    {
        cout << yes << " ";
        cout << no << " ";
    }
    
    // Eleventh task
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    cout << "\nEleventh task: " << endl;
    cout << "Add 3 numbers through ',': ";
    string input;
    getline(cin, input); 
    stringstream ss(input);
    int num1, num2, num3;
    char comma;
    
    ss >> num1 >> comma >> num2 >> comma >> num3;

    if (num2 != 0) {
        int result = (num1 + num3) / num2;
        cout << "Result: " << result << endl;
    } else {
        cout << "Error: Second number not must be ZERO." << endl;
    }
    
    // Twelve task
    cout << "\nTwelfth task: " << endl;
    string word;
    cout << "Input words: ";
    cin >> word;

    while (word.length() < 10) {
        cout << "Words too short!";
        cin >> word;
    }

    cout << "First 4 symbols: " << word.substr(0, 4) << endl;

    cout << "Last 2 symbols: " << word.substr(word.length() - 2) << endl;

    cout << "Symbols from 4 to 8: " << word.substr(3, 5) << endl;

    string reversed_word = word;
    reverse(reversed_word.begin(), reversed_word.end());
    cout << "Reverse word: " << reversed_word << endl;
}