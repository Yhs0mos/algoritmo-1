/**
 * 14_valores_diversos.c
 * 
 * Descrição:
 * Este algoritmo declara dois valores reais e cinco caracteres.
 * 
 * Funcionamento:
 * - Declara duas variáveis do tipo float (valores reais)
 * - Declara cinco variáveis do tipo char (caracteres)
 * - Solicita ao usuário que insira os valores reais
 * - Solicita ao usuário que insira os caracteres
 * - Exibe todos os valores inseridos
 */

#include <stdio.h>

int main() {
    float valor1, valor2;
    char char1, char2, char3, char4, char5;
    
    printf("=== Declaração de Valores Reais e Caracteres ===\n\n");
    
    // Solicita os valores reais
    printf("Digite o primeiro valor real: ");
    scanf("%f", &valor1);
    
    printf("Digite o segundo valor real: ");
    scanf("%f", &valor2);
    
    // Limpa o buffer de entrada
    while (getchar() != '\n');
    
    // Solicita os caracteres
    printf("\nAgora, digite cinco caracteres:\n");
    
    printf("Primeiro caractere: ");
    scanf("%c", &char1);
    while (getchar() != '\n');
    
    printf("Segundo caractere: ");
    scanf("%c", &char2);
    while (getchar() != '\n');
    
    printf("Terceiro caractere: ");
    scanf("%c", &char3);
    while (getchar() != '\n');
    
    printf("Quarto caractere: ");
    scanf("%c", &char4);
    while (getchar() != '\n');
    
    printf("Quinto caractere: ");
    scanf("%c", &char5);
    
    // Exibe os valores inseridos
    printf("\n=== Valores Inseridos ===\n");
    printf("Valores reais: %.2f e %.2f\n", valor1, valor2);
    printf("Caracteres: '%c', '%c', '%c', '%c', '%c'\n", 
           char1, char2, char3, char4, char5);
    
    return 0;
}
