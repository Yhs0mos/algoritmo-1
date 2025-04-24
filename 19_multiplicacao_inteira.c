/**
 * 19_multiplicacao_inteira.c
 * 
 * Descrição:
 * Este algoritmo recebe dois números reais e realiza uma multiplicação
 * que obrigatoriamente resulte em um número inteiro.
 * 
 * Funcionamento:
 * - Solicita ao usuário dois números reais
 * - Verifica se a multiplicação resulta em um número inteiro
 * - Se não resultar em um número inteiro, solicita novos números
 * - Exibe o resultado da multiplicação quando for um número inteiro
 */

#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2;
    float produto;
    int produto_inteiro;
    
    printf("=== Multiplicação com Resultado Inteiro ===\n\n");
    
    do {
        printf("Digite o primeiro número real: ");
        scanf("%f", &num1);
        
        printf("Digite o segundo número real: ");
        scanf("%f", &num2);
        
        produto = num1 * num2;
        produto_inteiro = (int)produto;
        
        // Verifica se o produto é um número inteiro
        if (fabs(produto - produto_inteiro) < 0.000001) {
            printf("\nA multiplicação %.2f × %.2f = %.2f resulta em um número inteiro.\n", 
                   num1, num2, produto);
            printf("Resultado inteiro: %d\n", produto_inteiro);
            break;
        } else {
            printf("\nA multiplicação %.2f × %.2f = %.6f não resulta em um número inteiro.\n", 
                   num1, num2, produto);
            printf("Por favor, tente novamente com outros números.\n\n");
        }
        
    } while (1);
    
    return 0;
}
