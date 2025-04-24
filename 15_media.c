/**
 * 15_media.c
 * 
 * Descrição:
 * Este algoritmo soma 3 números inteiros e depois calcula a média.
 * 
 * Funcionamento:
 * - Solicita ao usuário três números inteiros
 * - Calcula a soma dos três números
 * - Calcula a média aritmética (soma dividida por 3)
 * - Exibe a soma e a média calculadas
 */

#include <stdio.h>

int main() {
    int num1, num2, num3;
    int soma;
    float media;
    
    printf("=== Cálculo da Média de Três Números ===\n\n");
    
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);
    
    printf("Digite o terceiro número inteiro: ");
    scanf("%d", &num3);
    
    soma = num1 + num2 + num3;
    media = (float)soma / 3;
    
    printf("\nResultados:\n");
    printf("Soma: %d + %d + %d = %d\n", num1, num2, num3, soma);
    printf("Média: %d / 3 = %.2f\n", soma, media);
    
    return 0;
}
