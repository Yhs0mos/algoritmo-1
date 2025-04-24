/**
 * 03_tres_numeros.c
 * 
 * Descrição:
 * Este algoritmo recebe como entrada 3 números inteiros chamados a, b, c
 * e realiza operações básicas com eles (soma, média, maior e menor).
 * 
 * Funcionamento:
 * - Solicita três números inteiros ao usuário
 * - Calcula a soma dos três números
 * - Calcula a média aritmética dos três números
 * - Identifica o maior número entre os três
 * - Identifica o menor número entre os três
 * - Exibe todos os resultados calculados
 */

#include <stdio.h>

int main() {
    int a, b, c;
    int soma, maior, menor;
    float media;
    
    printf("Digite o primeiro número inteiro (a): ");
    scanf("%d", &a);
    
    printf("Digite o segundo número inteiro (b): ");
    scanf("%d", &b);
    
    printf("Digite o terceiro número inteiro (c): ");
    scanf("%d", &c);
    
    soma = a + b + c;
    
    media = (float)soma / 3;
    
    maior = a;
    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }
    
    menor = a;
    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }
    
    printf("\nResultados para os números %d, %d e %d:\n", a, b, c);
    printf("Soma: %d\n", soma);
    printf("Média: %.2f\n", media);
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    
    return 0;
}
