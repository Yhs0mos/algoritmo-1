/**
 * 08_dados_usuario.c
 * 
 * Descrição:
 * Este algoritmo pede o nome, idade, gênero e altura do usuário.
 * 
 * Funcionamento:
 * - Solicita o nome completo do usuário
 * - Solicita a idade do usuário
 * - Solicita o gênero do usuário
 * - Solicita a altura do usuário em metros
 * - Exibe todos os dados informados de forma organizada
 * 
 * Observações:
 * - Utiliza fgets para ler o nome e o gênero, permitindo a entrada de texto com espaços
 * - Remove a quebra de linha do final das strings
 * - Limpa o buffer de entrada após a leitura da idade para evitar problemas
 */

#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    int idade;
    char genero[20];
    float altura;
    
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    while (getchar() != '\n');
    
    printf("Digite seu gênero: ");
    fgets(genero, sizeof(genero), stdin);
    genero[strcspn(genero, "\n")] = '\0';
    
    printf("Digite sua altura em metros (ex: 1.70): ");
    scanf("%f", &altura);
    
    printf("\n--- Dados do Usuário ---\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Gênero: %s\n", genero);
    printf("Altura: %.2f metros\n", altura);
    
    return 0;
}
