#include <stdio.h>

int main() {
    printf("Enter the number of elements in the array:\n");
    int n, ans = -1, a, b, c;
    scanf("%i", &n);
    if (n >= 3) {
        printf("Enter an array, each number on a new line:\n");
        scanf("%i", &a);
        scanf("%i", &b);
    }
    for (int i = 0; i < n - 2; ++i) {
        scanf("%i", &c);
        if (b > a && b > c) {
            ans = i;
        }
        a = b;
        b = c;
    }

    if (ans == -1) {
        printf("Three not found!");
    } else {
        printf("Answer:\n");
        printf("%i, %i, %i", ans + 1, ans + 2, ans + 3);
    }

    return 0;
}
