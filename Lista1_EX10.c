#include <stdio.h>


int main()
{
    float salario[10];
    int i =0,j=0;

    float maior =salario[0];
    float menor =salario[0];


    for ( i = 0; i <10; i++)
    {
        printf("Insira o salario da %d° pessoa:\n-->",i+1);
        scanf("%f",&salario[i]);

        

    }
    int count =0;
    for ( j = 0; j< 10; j++)
    {
        if(salario[j]>maior){
            maior = salario[j];
        }
        if(salario[j]<menor){
            menor = salario[j];
        }
        salario[j] > 3000 ?count++:0;
    }   
    
    printf("O maior salario é de %f",maior);
    printf("\nO menor salario é de %f",menor);
    printf("\nO numero de pessoas que ganham mais que 3000 é de %d",count);
    
}