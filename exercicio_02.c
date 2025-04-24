/**
 * 02_altura.c
 * 
 * Descrição:
 * Este algoritmo identifica se a altura do usuário é maior ou menor 
 * que a altura média nacional.
 * 
 * Funcionamento:
 * - Solicita o gênero do usuário (M para masculino, F para feminino)
 * - Define a altura média nacional com base no gênero:
 *   - Masculino: 1,73 metros
 *   - Feminino: 1,60 metros
 *   - Outro/Não reconhecido: 1,67 metros (média geral)
 * - Solicita a altura do usuário em metros
 * - Compara a altura do usuário com a média nacional correspondente
 * - Informa se a altura do usuário é maior, menor ou igual à média nacional
 */

#include <stdio.h>

int main() {
    float altura_usuario, altura_media;
    char genero;
    
    printf("Digite seu gênero (M para masculino, F para feminino): ");
    scanf(" %c", &genero);
    
    if (genero == 'M' || genero == 'm') {
        altura_media = 1.73;
    } else if (genero == 'F' || genero == 'f') {
        altura_media = 1.60;
    } else {
        printf("Gênero não reconhecido. Usando altura média geral de 1.67 metros.\n");
        altura_media = 1.67;
    }
    
    printf("Digite sua altura em metros (ex: 1.70): ");
    scanf("%f", &altura_usuario);
    
    if (altura_usuario > altura_media) {
        printf("Sua altura (%.2f m) é MAIOR que a média nacional (%.2f m).\n", 
               altura_usuario, altura_media);
    } else if (altura_usuario < altura_media) {
        printf("Sua altura (%.2f m) é MENOR que a média nacional (%.2f m).\n", 
               altura_usuario, altura_media);
    } else {
        printf("Sua altura (%.2f m) é IGUAL à média nacional.\n", altura_usuario);
    }
    
    return 0;
}
