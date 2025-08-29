#include <stdio.h>
#include <locale.h>
#define TAMANHO 10

int main () {
    setlocale(LC_ALL, "");
    float numero[TAMANHO], maior;
    for (int i = 0;i < TAMANHO;i++)
    {
        printf("Digite um valor");
        scanf("%f",&numero[i]);
        maior = numero[0];
        if (numero[i] > maior)
        {
            maior = numero[i];
        }
    }
    printf("O maior número é %f", maior);
    return 0;
}