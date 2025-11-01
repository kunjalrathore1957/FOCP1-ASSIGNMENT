#include <stdio.h>

int main() {
    int a[] = {10, 99, 45, 99, 24};
    int n = sizeof(a)/sizeof(a[0]);
    for (int i = 0; i < n; i++) {
        if (a[i] == 99) {
            printf("First occurrence is at index %d\n", i);
            return 0;
        }
    }
    printf("99 not found\n");
    return 0;
}
