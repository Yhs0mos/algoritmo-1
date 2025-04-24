/**
 * 11_divisao_inteira.c
 * 
 * Descrição:
 * Este algoritmo insere dois números e realiza uma divisão
 * que obrigatoriamente resulte em um número inteiro.
 * 
 * Funcionamento:
 * - Solicita ao usuário o primeiro número inteiro
 * - Solicita o segundo número inteiro, garantindo que seja um divisor do primeiro
 * - Verifica se o segundo número é zero (para evitar divisão por zero)
 * - Verifica se a divisão resulta em um número inteiro (resto zero)
 * - Caso as condições não sejam atendidas, solicita novamente o segundo número
 * - Realiza a divisão e exibe o resultado
 */

#include <stdio.h>

int main() {
    int num1, num2;
    int resultado;
    
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    
    do {
        printf("Digite o segundo número inteiro (deve ser um divisor de %d): ", num1);
        scanf("%d", &num2);
        
        if (num2 == 0) {
            printf("Erro: Divisão por zero não é permitida.\n");
            continue;
        }
        
        if (num1 % num2 != 0) {
            printf("Erro: %d não é um divisor de %d. A divisão não resulta em um número inteiro.\n", num2, num1);
        }
        
    } while (num2 == 0 || num1 % num2 != 0);
    
    resultado = num1 / num2;
    
    printf("\nResultado da divisão %d / %d = %d\n", num1, num2, resultado);
    printf("Confirmação: %d é um número inteiro.\n", resultado);
    
    return 0;
}
