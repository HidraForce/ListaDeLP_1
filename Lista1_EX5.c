#include <stdio.h>
int teste_primo(int x)
{
    int i, resto = 0;
    for (i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            resto++;
        }
    }
    if (resto == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int i = 0, num[10];
    for (i = 0; i < 10; i++)
    {
        printf("Insira um numero: \n");
        scanf("%d", &num[i]);
    }

    int j = 0, count = 0, count_impar = 0, count_par = 0, sumPar = 0;
    for (j = 0; j < 10; j++)
    {
        if (teste_primo(num[j])==1)
        {
            count = count + 1;
        }
        if (num[j] % 2 != 0)
        {
            count_impar = count_impar + 1;
        }
        if (num[j] % 2 == 0)
        {
            count_par = count_par + 1;

            sumPar = sumPar + num[j];
        }
    }
    if (sumPar != 0)
    {
        int media = sumPar / count_par;
        printf("A média dos numeros pares inseridos foi de: %d\n", media);
    }
    printf("Foram inseridos %d Primos\n", count);
    printf("Foram inseridos %d Impares\n", count_impar);
}
