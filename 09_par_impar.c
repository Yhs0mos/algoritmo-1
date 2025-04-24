/**
 * 09_par_impar.c
 * 
 * Descrição:
 * Este algoritmo recebe um número inteiro e informa se ele é par ou ímpar.
 * 
 * Funcionamento:
 * - Solicita ao usuário um número inteiro
 * - Verifica se o número é par ou ímpar usando o operador de módulo (%)
 * - Um número é considerado par se o resto da divisão por 2 for igual a zero
 * - Um número é considerado ímpar se o resto da divisão por 2 for diferente de zero
 * - Exibe o resultado da verificação
 */

#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    if (numero % 2 == 0) {
        printf("O número %d é PAR.\n", numero);
    } else {
        printf("O número %d é ÍMPAR.\n", numero);
    }
    
    return 0;
}
