#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {10, 25, 8, 31, 15};
    int x = 15;

    int count = std::count_if(v.begin(), v.end(), [x](int n) {
        return n > x;
    });

    std::cout << "Elementi maggiori di " << x << ": " << count << std::endl;
}
