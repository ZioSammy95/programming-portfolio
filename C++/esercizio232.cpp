#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numeri = {1, 2, 3, 4, 5};

    std::for_each(numeri.begin(), numeri.end(), [](int n) {
        std::cout << n << " ";
    });

    std::cout << std::endl;
}
