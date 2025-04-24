/**
 * 10_cardapio.c
 * 
 * Descrição:
 * Este algoritmo exibe um cardápio com no mínimo 5 escolhas
 * e permite ao usuário selecionar uma opção.
 * 
 * Funcionamento:
 * - Exibe um cardápio com 6 opções de alimentos e bebidas com seus respectivos preços
 * - Solicita ao usuário que digite o número da opção desejada
 * - Verifica a opção escolhida usando uma estrutura switch-case
 * - Exibe uma mensagem confirmando a escolha do usuário
 * - Caso o usuário digite um número fora do intervalo válido, exibe uma mensagem de erro
 */

#include <stdio.h>

int main() {
    int opcao;
    
    printf("===== CARDÁPIO =====\n");
    printf("1. X-Burger (R$ 15,00)\n");
    printf("2. X-Salada (R$ 17,00)\n");
    printf("3. X-Bacon (R$ 19,00)\n");
    printf("4. X-Tudo (R$ 22,00)\n");
    printf("5. Batata Frita (R$ 10,00)\n");
    printf("6. Refrigerante (R$ 6,00)\n");
    printf("===================\n\n");
    
    printf("Digite o número da opção desejada: ");
    scanf("%d", &opcao);
    
    switch (opcao) {
        case 1:
            printf("Você escolheu X-Burger (R$ 15,00).\n");
            break;
        case 2:
            printf("Você escolheu X-Salada (R$ 17,00).\n");
            break;
        case 3:
            printf("Você escolheu X-Bacon (R$ 19,00).\n");
            break;
        case 4:
            printf("Você escolheu X-Tudo (R$ 22,00).\n");
            break;
        case 5:
            printf("Você escolheu Batata Frita (R$ 10,00).\n");
            break;
        case 6:
            printf("Você escolheu Refrigerante (R$ 6,00).\n");
            break;
        default:
            printf("Opção inválida! Por favor, escolha um número de 1 a 6.\n");
    }
    
    return 0;
}
