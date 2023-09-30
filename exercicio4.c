#include <stdio.h>

int main() {
    int A, B, C;
    
    
    printf("Digite os valores dos lados A, B e C do triângulo: ");
    scanf("%d %d %d", &A, &B, &C);
    
    if ((A + B > C) && (A + C > B) && (B + C > A)) {
        
        if (A*A + B*B == C*C || A*A + C*C == B*B || B*B + C*C == A*A) {
            printf("Triângulo Retângulo\n");
        } else if (A*A + B*B < C*C || A*A + C*C < B*B || B*B + C*C < A*A) {
            printf("Triângulo Obtusângulo\n");
        } else {
            printf("Triângulo Acutângulo\n");
        }
    } else {
        printf("Estes valores não formam um triângulo.\n");
    }
    
    return 0;
}
