// EXERCICIO 5

#include <stdio.h>

int main ()
{
    int vet[10] = {2,4,5,10,13,20,21,25,30,40};
    int elmt = 0;

    // IMPRESSAO DO VETOR -> ENTRADA
    printf ("\nVetor original: ");
    for (int i = 0; i < 10; i++)
    {
        printf ("%d ",vet[i]);
    }
    printf ("\n");

    printf ("\nVetor com a diferenca dos elementos adjacentes:\n");
    for (int i = 1; i < 10; i++)
    {
        elmt = vet[i] - vet[i-1]; // CALCULO DA DIFERENCA DO ELEMENTO ANTERIOR
        printf ("%d ",elmt); // SAIDA (VETOR COM OS RESULTADOS DA DIFERENCA)
    }
    printf ("\n");

return 0;
}
