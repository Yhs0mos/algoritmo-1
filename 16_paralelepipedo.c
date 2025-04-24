/**
 * 16_paralelepipedo.c
 * 
 * Descrição:
 * Este algoritmo recebe as 3 dimensões de um paralelepípedo em metros
 * e calcula seu volume e área total.
 * 
 * Funcionamento:
 * - Solicita ao usuário as três dimensões (comprimento, largura e altura) em metros
 * - Calcula o volume do paralelepípedo (comprimento × largura × altura)
 * - Calcula a área total (2 × (comprimento × largura + comprimento × altura + largura × altura))
 * - Exibe os resultados calculados
 */

#include <stdio.h>

int main() {
    float comprimento, largura, altura;
    float volume, area_total;
    
    printf("=== Cálculo de Volume e Área de um Paralelepípedo ===\n\n");
    
    printf("Digite o comprimento (em metros): ");
    scanf("%f", &comprimento);
    
    printf("Digite a largura (em metros): ");
    scanf("%f", &largura);
    
    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);
    
    // Cálculo do volume
    volume = comprimento * largura * altura;
    
    // Cálculo da área total
    area_total = 2 * (comprimento * largura + comprimento * altura + largura * altura);
    
    printf("\nResultados:\n");
    printf("Volume do paralelepípedo: %.2f m³\n", volume);
    printf("Área total do paralelepípedo: %.2f m²\n", area_total);
    
    return 0;
}
