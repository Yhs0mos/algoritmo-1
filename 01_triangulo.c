/**
 * 01_triangulo.c
 * 
 * Descrição:
 * Este algoritmo identifica se três valores formam um triângulo e classifica o tipo
 * de triângulo (equilátero, isósceles ou escaleno).
 * 
 * Funcionamento:
 * - Solicita os três lados do triângulo
 * - Verifica se os valores formam um triângulo (a soma de dois lados deve ser maior que o terceiro lado)
 * - Se formar um triângulo, classifica como:
 *   - Equilátero: todos os lados iguais
 *   - Isósceles: dois lados iguais
 *   - Escaleno: todos os lados diferentes
 * - Se não formar um triângulo, informa ao usuário
 */

#include <stdio.h>

int main() {
    float lado1, lado2, lado3;
    
    printf("Digite o valor do primeiro lado: ");
    scanf("%f", &lado1);
    
    printf("Digite o valor do segundo lado: ");
    scanf("%f", &lado2);
    
    printf("Digite o valor do terceiro lado: ");
    scanf("%f", &lado3);
    
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        printf("Os valores formam um triângulo ");
        
        if (lado1 == lado2 && lado2 == lado3) {
            printf("equilátero.\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("isósceles.\n");
        } else {
            printf("escaleno.\n");
        }
    } else {
        printf("Os valores não formam um triângulo.\n");
    }
    
    return 0;
}
