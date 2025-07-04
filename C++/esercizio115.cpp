#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Quanti numeri della sequenza di Fibonacci vuoi stampare? ";
    cin >> n;

    vector<long long> fibonacci;

    if (n >= 1) fibonacci.push_back(0);
    if (n >= 2) fibonacci.push_back(1);

    for (int i = 2; i < n; ++i) {
        long long next = fibonacci[i - 1] + fibonacci[i - 2];
        fibonacci.push_back(next);
    }

    cout << "Sequenza di Fibonacci:\n";
    for (long long num : fibonacci) {
        cout << num << " ";
    }

    cout << endl;
    return 0;
}
