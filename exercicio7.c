#include <stdio.h>

int main() {
    int num_alunos = 30;
    float nota1, nota2, nota3, media_ponderada, media_geral = 0;

    for (int i = 1; i <= num_alunos; ++i) {
        
        printf("Digite as notas do aluno %d (nota1 nota2 nota3): ", i);
        scanf("%f %f %f", &nota1, &nota2, &nota3);

        
        media_ponderada = (nota1 * 2 + nota2 * 4 + nota3 * 3) / 10.0;

        
        printf("Média do aluno %d: %.2f - ", i, media_ponderada);
        if (media_ponderada >= 7) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }

        
        media_geral += media_ponderada;
    }

    
    media_geral /= num_alunos;
    printf("Média geral da turma: %.2f\n", media_geral);

    return 0;
}
