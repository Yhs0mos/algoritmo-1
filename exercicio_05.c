/**
 * 05_bhaskara.c
 * 
 * Descrição:
 * Este algoritmo calcula as raízes de uma equação do segundo grau
 * utilizando a fórmula de Bhaskara.
 * 
 * Funcionamento:
 * - Solicita os coeficientes a, b e c da equação ax² + bx + c = 0
 * - Verifica se a é diferente de zero (condição para equação do segundo grau)
 * - Calcula o discriminante (delta = b² - 4ac)
 * - Verifica o valor de delta para determinar o número de raízes reais:
 *   - Delta < 0: não existem raízes reais
 *   - Delta = 0: existe uma raiz real (raízes iguais)
 *   - Delta > 0: existem duas raízes reais distintas
 * - Calcula as raízes usando a fórmula de Bhaskara: x = (-b ± √delta) / (2a)
 * - Exibe os resultados
 */

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, x1, x2;
    
    printf("Cálculo das raízes de uma equação do segundo grau (ax² + bx + c = 0)\n\n");
    
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    
    if (a == 0) {
        printf("Não é uma equação do segundo grau, pois a = 0.\n");
        return 1;
    }
    
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    
    delta = b*b - 4*a*c;
    
    printf("\nEquação: %.2fx² + %.2fx + %.2f = 0\n", a, b, c);
    printf("Delta = %.2f\n", delta);
    
    if (delta < 0) {
        printf("A equação não possui raízes reais (delta < 0).\n");
    } else if (delta == 0) {
        x1 = -b / (2*a);
        printf("A equação possui uma raiz real (delta = 0).\n");
        printf("x = %.4f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("A equação possui duas raízes reais (delta > 0).\n");
        printf("x1 = %.4f\n", x1);
        printf("x2 = %.4f\n", x2);
    }
    
    return 0;
}
