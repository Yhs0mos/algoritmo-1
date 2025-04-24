/**
 * 12_limite_caracteres.c
 * 
 * Descrição:
 * Este algoritmo utiliza uma variável do tipo char e define
 * o número máximo de letras que a pessoa pode escrever.
 * 
 * Funcionamento:
 * - Solicita ao usuário o número máximo de letras permitidas (entre 1 e 49)
 * - Verifica se o limite está dentro do intervalo válido
 * - Solicita ao usuário que digite um texto, respeitando o limite definido
 * - Verifica o tamanho do texto digitado
 * - Exibe informações sobre o texto, incluindo seu tamanho
 * - Caso o texto exceda o limite, realiza o truncamento
 * - Informa ao usuário quantos caracteres ainda pode digitar, se não atingiu o limite
 */

#include <stdio.h>
#include <string.h>

int main() {
    char texto[50]; // Define um array de caracteres com tamanho máximo de 50
    int limite, tamanho;
    
    printf("Digite o número máximo de letras permitidas (entre 1 e 49): ");
    scanf("%d", &limite);
    
    if (limite < 1 || limite > 49) {
        printf("Erro: O limite deve estar entre 1 e 49 caracteres.\n");
        return 1;
    }
    
    while (getchar() != '\n');
    
    printf("Digite um texto (máximo %d caracteres): ", limite);
    fgets(texto, limite + 2, stdin);
    
    texto[strcspn(texto, "\n")] = '\0';
    
    tamanho = strlen(texto);
    
    printf("\nTexto digitado: \"%s\"\n", texto);
    printf("Tamanho do texto: %d caracteres\n", tamanho);
    
    if (tamanho > limite) {
        printf("Aviso: O texto foi truncado para %d caracteres.\n", limite);
        texto[limite] = '\0';
        printf("Texto truncado: \"%s\"\n", texto);
    } else if (tamanho < limite) {
        printf("Você ainda pode digitar mais %d caracteres.\n", limite - tamanho);
    } else {
        printf("Você utilizou exatamente o limite de caracteres permitido.\n");
    }
    
    return 0;
}
