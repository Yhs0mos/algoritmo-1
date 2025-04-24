/**
 * 17_ordenacao.c
 * 
 * Descrição:
 * Este algoritmo recebe 5 números inteiros e retorna eles de forma ordenada e crescente.
 * 
 * Funcionamento:
 * - Solicita ao usuário cinco números inteiros
 * - Implementa o algoritmo de ordenação Bubble Sort para ordenar os números
 * - Exibe os números em ordem crescente
 */

#include <stdio.h>

int main() {
    int numeros[5];
    int i, j, temp;
    
    printf("=== Ordenação de Cinco Números Inteiros ===\n\n");
    
    // Leitura dos cinco números
    for (i = 0; i < 5; i++) {
        printf("Digite o %dº número inteiro: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    printf("\nNúmeros informados: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    
    // Algoritmo de ordenação Bubble Sort
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                // Troca os elementos
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }
    
    printf("\n\nNúmeros em ordem crescente: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    
    return 0;
}
