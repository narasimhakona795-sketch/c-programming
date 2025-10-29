#include <stdio.h>

int main() {
    int A1, A2, A3, B1, B2, B3;
    scanf("%d%d%d%d%d%d", &A1, &A2, &A3, &B1, &B2, &B3);

    // Find Alice's highest two rolls
    int alice_total = A1 + A2 + A3;
    int alice_min = (A1 < A2) ? ((A1 < A3) ? A1 : A3) : ((A2 < A3) ? A2 : A3);
    int alice_score = alice_total - alice_min;

    // Find Bob's highest two rolls
    int bob_total = B1 + B2 + B3;
    int bob_min = (B1 < B2) ? ((B1 < B3) ? B1 : B3) : ((B2 < B3) ? B2 : B3);
    int bob_score = bob_total - bob_min;

    // Determine the winner
    if (alice_score > bob_score) {
        printf("Alice");
    } else if (bob_score > alice_score) {
        printf("Bob");
    } else {
        printf("Tie");
    }

    return 0;
}

