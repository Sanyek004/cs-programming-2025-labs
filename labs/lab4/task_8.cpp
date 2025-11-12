#include <iostream> 
#include <iomanip>  
#include <clocale>  

using namespace std;

int main() {
    double purchaseAmount; // Сумма покупки (может быть дробной)
    int discountPercent;   // Процент скидки (целое число)
    double discountRate;   // Коэффициент скидки (для расчета, 0.05, 0.10 и т.д.)

   
    cout << "Enter sum shops: ";
    cin >> purchaseAmount;

    
    if (purchaseAmount < 1000) {
        // "до 1000"
        discountPercent = 0;
        discountRate = 0.0;
    } else if (purchaseAmount >= 1000 && purchaseAmount <= 5000) {
        // "1000-5000" (включительно)
        discountPercent = 5;
        discountRate = 0.05;
    } else if (purchaseAmount > 5000 && purchaseAmount <= 10000) {
        // "5000-10000" (5000 не входит, 10000 входит)
        discountPercent = 10;
        discountRate = 0.10;
    } else {
        // "более 10000"
        discountPercent = 15;
        discountRate = 0.15;
    }

    // Сумма * (1 - коэффициент_скидки)
    double finalAmount = purchaseAmount * (1.0 - discountRate);

    cout << "Your skidka: " << discountPercent << "%" << endl;

    cout << fixed << setprecision(1);
    cout << "In pay: " << finalAmount << endl;

    return 0; 
}