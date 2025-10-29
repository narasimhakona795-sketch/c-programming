#include <stdio.h>

int main() {
    int A;
    scanf("%d", &A);

    if (A % 7 == 0 && A % 2 == 0) {
        printf("Alice");
    } else if (A % 9 == 0 && A % 2 == 1) {
        printf("Bob");
    } else {
        printf("Charlie");
    }

    return 0;
}

