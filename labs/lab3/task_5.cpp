#include <iostream>
using namespace std;

int main() {
    int i = 20;
    while (i >= 0) {
        cout << i << (i ? ' ' : '\n'); // пробел между числами и перевод строки в конце
        --i;
    }
    return 0;
}
