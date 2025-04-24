/**
 * 07_soma_divisao.c
 * 
 * Descrição:
 * Este algoritmo recebe dois pares de números inteiros, soma cada par
 * e depois divide o primeiro resultado pelo segundo.
 * 
 * Funcionamento:
 * - Solicita o primeiro par de números inteiros
 * - Calcula e exibe a soma do primeiro par
 * - Solicita o segundo par de números inteiros
 * - Calcula e exibe a soma do segundo par
 * - Verifica se a soma do segundo par é diferente de zero (para evitar divisão por zero)
 * - Calcula a divisão da primeira soma pela segunda soma
 * - Exibe o resultado final da divisão
 */

#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    int soma1, soma2;
    float resultado;
    
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);
    
    soma1 = num1 + num2;
    printf("A soma do primeiro par (%d + %d) = %d\n\n", num1, num2, soma1);
    
    printf("Digite o terceiro número inteiro: ");
    scanf("%d", &num3);
    
    printf("Digite o quarto número inteiro: ");
    scanf("%d", &num4);
    
    soma2 = num3 + num4;
    printf("A soma do segundo par (%d + %d) = %d\n\n", num3, num4, soma2);
    
    if (soma2 == 0) {
        printf("Erro: A soma do segundo par é zero. Não é possível realizar a divisão.\n");
        return 1;
    }
    
    resultado = (float)soma1 / soma2;
    
    printf("O resultado da divisão %d / %d = %.2f\n", soma1, soma2, resultado);
    
    return 0;
}
