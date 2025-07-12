#include <iostream>
using namespace std;

int main() {
    int i = 1;

    do {
        if (i == 27) {
            i++;
            continue;
        }
        cout << i << " ";
        i += 2;
    } while (i <= 50);

    return 0;
}
