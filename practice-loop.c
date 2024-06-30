#include<stdio.h>

int main() {
    for(int i = 10; i >= 0; i--) {
        for(int j = 0; j <= 10; j++) {
            printf("%d ", i + j);
        }
        printf("\n"); // Print newline after each inner loop iteration
    }
    return 0; // Move return statement outside the outer loop
}
