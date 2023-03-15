/*Escreva um programa que leia um conjunto de 10 números inteiros. Calcule e mostre:
•menor número
•soma dos números pares e maiores que 10
•quantidade de números ímpares
•média dos números maiores que 20 */

#include <stdio.h>
int menor(int x[]){
    int min,i;
    min = x[0];
    for (i = 0; i < 10; i++)
    {
        if (x[i] < min)
        {
            min = x[i];
        }
    }
    return min;

}

int main()
{
    int valores[10], min, soma = 0, j, count_impar = 0, sum_20 = 0, count_20 = 0, i;

    for (j = 0; j < 10; j++)
    {
        printf("Entre com um numero: \n");
        scanf("%d", &valores[j]);

        if (valores[j] % 2 == 0)
        {
            if (valores[j] > 10)
            {

                soma = soma + valores[j];
            }
        }
        else
        {
            count_impar++;
        }

        if (valores[j] > 20)
        {
            sum_20 = sum_20 + valores[j];
            count_20++;
        }
    }
    
    int media;
    if (count_20 > 0)
    {
        media = sum_20 / count_20;
    }
    else
    {
        media = 0;
    }

    printf("O menor valor é:  %d \n", menor(valores));
    printf("A soma dos elemntos pares é:  %d \n", soma);
    printf("O numero de elemntos impares é:  %d \n", count_impar);
    printf("A média de valores maior quee 20  é:  %d \n", media);
}
