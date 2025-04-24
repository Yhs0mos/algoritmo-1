/**
 * 18_vogal_resposta.c
 * 
 * Descrição:
 * Este algoritmo responde ao usuário quando ele digitar a vogal "o" com a vogal "e".
 * 
 * Funcionamento:
 * - Solicita ao usuário que digite um caractere
 * - Verifica se o caractere digitado é a vogal "o" (maiúscula ou minúscula)
 * - Se for a vogal "o", responde com a vogal "e"
 * - Caso contrário, informa que a entrada não é a vogal esperada
 */

#include <stdio.h>

int main() {
    char entrada;
    
    printf("=== Resposta à Vogal ===\n\n");
    
    printf("Digite um caractere: ");
    scanf(" %c", &entrada);
    
    if (entrada == 'o' || entrada == 'O') {
        printf("e\n");
    } else {
        printf("Entrada inválida. Por favor, digite a vogal 'o'.\n");
    }
    
    return 0;
}
