/**
 * 13_idade_meses.c
 * 
 * Descrição:
 * Este algoritmo coleta a data de nascimento do usuário e calcula sua idade em meses.
 * 
 * Funcionamento:
 * - Solicita ao usuário o dia, mês e ano de nascimento
 * - Obtém a data atual do sistema
 * - Calcula a diferença em meses entre a data atual e a data de nascimento
 * - Exibe a idade do usuário em meses
 */

#include <stdio.h>
#include <time.h>

int main() {
    int dia_nasc, mes_nasc, ano_nasc;
    int idade_meses;
    
    // Obter a data atual
    time_t t = time(NULL);
    struct tm *data_atual = localtime(&t);
    int dia_atual = data_atual->tm_mday;
    int mes_atual = data_atual->tm_mon + 1;    // tm_mon é baseado em zero (0-11)
    int ano_atual = data_atual->tm_year + 1900; // tm_year é o número de anos desde 1900
    
    // Solicitar a data de nascimento
    printf("Digite sua data de nascimento:\n");
    printf("Dia: ");
    scanf("%d", &dia_nasc);
    
    printf("Mês: ");
    scanf("%d", &mes_nasc);
    
    printf("Ano: ");
    scanf("%d", &ano_nasc);
    
    // Validar a data de nascimento
    if (dia_nasc < 1 || dia_nasc > 31 || mes_nasc < 1 || mes_nasc > 12 || ano_nasc > ano_atual) {
        printf("Data de nascimento inválida.\n");
        return 1;
    }
    
    // Calcular a idade em meses
    idade_meses = (ano_atual - ano_nasc) * 12 + (mes_atual - mes_nasc);
    
    // Ajustar se o dia do mês atual for menor que o dia de nascimento
    if (dia_atual < dia_nasc) {
        idade_meses--;
    }
    
    // Exibir o resultado
    printf("\nData atual: %02d/%02d/%d\n", dia_atual, mes_atual, ano_atual);
    printf("Data de nascimento: %02d/%02d/%d\n", dia_nasc, mes_nasc, ano_nasc);
    printf("Sua idade é de %d meses.\n", idade_meses);
    
    return 0;
}
