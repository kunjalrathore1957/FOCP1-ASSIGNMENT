#include <stdio.h>

int main() {
    int marks[] = {98, 99, 85, 99, 70, 99, 88};
    int n = sizeof(marks)/sizeof(marks[0]);
    int count = 0;

    printf(" ");
    for(int i = 0; i < n; i++) {
        if(marks[i] == 99) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n : %d\n", count);
    return 0;
}
