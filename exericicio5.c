#include <stdio.h>
#include <math.h>

int main() {
float x1, y1, x2, y2;
    
    printf("Digite as coordenadas do ponto P1 (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Digite as coordenadas do ponto P2 (x2 y2): ");
    scanf("%f %f", &x2, &y2);
    
    float distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("A distância entre os pontos P1 e P2 é: %.4f\n", distancia);
    
    return 0;
}
