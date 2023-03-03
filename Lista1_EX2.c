/*Escreva um programa que leia um conjunto de 10 números inteiros. Calcule e mostre: •menor número •soma dos números pares e maiores que 10 •quantidade de números ímpares •média dos números maiores que 20 */

#include <stdio.h>

int main()
{
    int valores[10];
    int j;
    int i;
    int k;
    int l;
    int m;

    for (j = 0; j < 10; j++)
    {
        printf("Entre com o %d° numero: \n", j+1 );
        scanf("%d", &valores[j]);
    }

    int menor = valores[0];

    for(i = 0; i < 10; i++) {
 
        if(valores[i]<menor)
            menor = valores[i];
 
    }
    int soma = 0 ;
    for (k = 0; k < 10; k++)
    {
    
       if(valores[k] >10 && valores[k]%2 == 0){
        soma = soma +valores[k];
       }
    }
    int count = 0;
    for ( l = 0; l < 10; l++)
    {
        if (valores[l]%2 != 0)
        {
            count = count +1;
        }
        
    }
    int media = 0;
    int val = 0;
    int ct = 0;    
    for (m = 0; m < 10; m++)
    {
        if (valores[m] > 20)
        {
            val = val + valores[m];
            ct = ct + 1;
        }

        media = val/ct;
    }
    


    
    printf("O menor valor é:  %d \n", menor);
    printf("A soma dos elemntos pares é:  %d \n", soma);
    printf("O numero de elemntos impares é:  %d \n", count);
    printf("A média de valores maior quee 20  é:  %d \n", media);
         
    
}
