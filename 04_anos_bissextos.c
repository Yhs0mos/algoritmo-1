/**
 * 04_anos_bissextos.c
 * 
 * Descrição:
 * Este algoritmo recebe duas datas em anos e mostra os anos bissextos
 * dentro do intervalo entre elas.
 * 
 * Funcionamento:
 * - Solicita o ano inicial e o ano final do intervalo
 * - Verifica se o ano inicial é menor que o ano final
 * - Percorre todos os anos no intervalo e verifica quais são bissextos
 * - Exibe cada ano bissexto encontrado e o total de anos bissextos no intervalo
 * 
 * Regras para identificar um ano bissexto:
 * - Um ano é bissexto se for divisível por 4
 * - Exceto se for divisível por 100 e não for divisível por 400
 * - Exemplos: 1996 (bissexto), 1900 (não bissexto), 2000 (bissexto)
 */

#include <stdio.h>

// Função para verificar se um ano é bissexto
int ehBissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return 1; // É bissexto
    } else {
        return 0; // Não é bissexto
    }
}

int main() {
    int anoInicial, anoFinal;
    int contador = 0;
    
    printf("Digite o ano inicial: ");
    scanf("%d", &anoInicial);
    
    printf("Digite o ano final: ");
    scanf("%d", &anoFinal);
    
    if (anoInicial >= anoFinal) {
        printf("Erro: O ano inicial deve ser menor que o ano final.\n");
        return 1;
    }
    
    printf("\nAnos bissextos entre %d e %d:\n", anoInicial, anoFinal);
    
    for (int ano = anoInicial; ano <= anoFinal; ano++) {
        if (ehBissexto(ano)) {
            printf("%d\n", ano);
            contador++;
        }
    }
    
    printf("\nTotal de anos bissextos no intervalo: %d\n", contador);
    
    return 0;
}
