#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> mas = { 1, 1, 2, 5, 6, 1, 2, 4, 6, 6,5,5 };
    std::cout << "[IN]: ";
    for (int num : mas) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::sort(mas.begin(), mas.end());
    auto newmas = std::unique(mas.begin(), mas.end());
    mas.erase(newmas, mas.end());

    std::cout << "[OUT]: ";
    for (int num : mas) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}