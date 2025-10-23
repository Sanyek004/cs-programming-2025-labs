#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Privet";
    string res = "";

    for (int i = 0; i < str.size(); i++) {
        res += str[i];
        res += to_string(i + 1);
    }

    cout << res;
    return 0;
}
