#include <stdio.h>
float maior(float x[])
{
    float maior;
    int i;
    maior = x[0];
    for (i = 1; i < 10; i++)
    {
        if (maior < x[i])
        {
            maior = x[i];
        }
    }
    return maior;
}

float menor(float x[])
{
    float menor;
    int i;
    menor = x[0];
    for (i = 1; i < 10; i++)
    {
        if (x[i] < menor)
        {
            menor = x[i];
        }
    }
    return menor;
}

int main()
{
    float salario[10];
    int i = 0, count = 0,j;
    for (i = 0; i < 10; i++)
    {
        printf("Insira o salario da %d° pessoa:\n-->", i + 1);
        scanf("%f", &salario[i]);
    }
    for ( j = 0; j < 10; j++)
    {
        if (salario[j]> 3000)
        {
            count++;
        }
        
    }
    
  
    printf("O maior salario é de %f", maior(salario));
    printf("\nO menor salario é de %f", menor(salario));
    printf("\nO numero de pessoas que ganham mais que 3000 é de %d\n", count);
}