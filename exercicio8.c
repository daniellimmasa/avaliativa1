#include <stdio.h>

int main() {
    
    float salario, somaSalario = 0, mediaSalario, maiorSalario = 0;
    int numFilhos, totalPessoas = 0, totalPessoasAte100 = 0;
    float mediaFilhos, percentualAte100;

    do {
        
        printf("Digite o salario (ou um valor negativo para encerrar): ");
        scanf("%f", &salario);
        
        
        if (salario >= 0) {
            printf("Digite o numero de filhos: ");
            scanf("%d", &numFilhos);
            
            somaSalario += salario;

            mediaFilhos += numFilhos;
            
            if (salario > maiorSalario) {
                maiorSalario = salario;
            }

            if (salario <= 100) {
                totalPessoasAte100++;
            }

            totalPessoas++;
        }
    } while (salario >= 0);

    mediaSalario = somaSalario / totalPessoas;
    mediaFilhos /= totalPessoas;

    percentualAte100 = (float)totalPessoasAte100 / totalPessoas * 100;

    printf("a) Media do salario da populacao: %.2f\n", mediaSalario);
    printf("b) Media do numero de filhos: %.2f\n", mediaFilhos);
    printf("c) Maior salario: %.2f\n", maiorSalario);
    printf("d) Percentual de pessoas com salario ate R$100.00: %.2f%%\n", percentualAte100);

    return 0;
}
