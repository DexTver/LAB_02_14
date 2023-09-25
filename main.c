#include <stdio.h>

int main() {
    printf("Enter the number of elements in the array:\n");
    int n, ans;
    scanf("%i", &n);
    printf("Enter an array:\n");
    int a[n];
    ans = -1;
    for (int i = 0; i < n; ++i) {
        scanf("%i", &a[i]);
    }

    for (int i = 0; i < n - 2 && ans == -1; ++i) {
        if (a[i + 1] > a[i] && a[i + 1] > a[i + 2]) {
            ans = i;
        }
    }
    if (ans == -1) {
        printf("Three not found!");
    } else {
        printf("Answer:\n");
        printf("%i, %i, %i", ans + 1, ans + 2, ans + 3);
    }

    return 0;
}
