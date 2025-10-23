#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long a = 0, b = 1;
    while (a <= n) {
        cout << a << " ";
        long long c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
