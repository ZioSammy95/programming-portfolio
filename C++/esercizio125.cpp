#include <iostream>
using namespace std;

int main() {
    int i = 1;

    while (i <= 100) {
        cout << i << " ";

        if (i == 50)
            break;

        i++;
    }

    return 0;
}