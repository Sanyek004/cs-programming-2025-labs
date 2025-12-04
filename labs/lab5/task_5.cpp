#include <iostream>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    
    map<string, int> prices =
    {
        {"apple", 100},
        {"egg", 120},
        {"banana", 80}
    };

    // Возвращает пару, где first — это итератор на минимум, а second — итератор на максимум
    auto result = minmax_element(prices.begin(), prices.end(),
        [](const auto& a, const auto& b) {
            return a.second < b.second; // Сравниваем по цене
        });

    // Проверяем, не пустой ли map
    if (prices.begin() != prices.end()) {
        auto min_it = result.first;  // Итератор на минимум
        auto max_it = result.second; // Итератор на максимум

        std::cout << "Minimum: " << min_it->first << " (" << min_it->second << ")\n";
        std::cout << "Maximum: " << max_it->first << " (" << max_it->second << ")\n";
    }

    return 0;
}
