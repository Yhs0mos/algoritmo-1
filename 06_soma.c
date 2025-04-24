/**
 * 06_soma.c
 * 
 * Descrição:
 * Este algoritmo recebe dois números inteiros, soma e mostra o resultado.
 * 
 * Funcionamento:
 * - Solicita ao usuário dois números inteiros
 * - Calcula a soma dos dois números
 * - Exibe o resultado da soma
 */

#include <stdio.h>

int main() {
    int num1, num2, soma;
    
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);
    
    soma = num1 + num2;
    
    printf("\nA soma de %d + %d = %d\n", num1, num2, soma);
    
    return 0;
}
