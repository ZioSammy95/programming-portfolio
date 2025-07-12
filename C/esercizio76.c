#include <stdio.h>

int main() {
    for (int i = 2; i <= 50; i++) {
        int j;

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                break;
            }
        }

        if (j == i) {
            printf("%d ", i);
        }
    }

    return 0;
}
