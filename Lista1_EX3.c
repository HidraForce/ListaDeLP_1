#include <stdio.h>

int main()
{

    //bloco Eentrada
    int num[10];
    int i = 0;
    for ( i = 0; i < 10; i++)
    {
       printf("Insira o %d° numero: \n",i+1);
       scanf("%d",&num[i]);

       
    }

    //bloco soma
    int j= 0;
    int soma = 0;
    for ( j = 0; j < 10; j++)
    {
        
        if( num[j]%num[j] == 0){
            soma = soma + num[j];
        }
    }
    //bloco média
    int k= 0;
    int media = 0 ,sum = 0,count = 0;

    for ( k = 0; k < 10; k++)
    {
        if(num[k]%3 == 0){
            if(num[k]>10){
                sum = sum + num[k];
                count = count +1 ;
            }
        }
    }
    media = sum/count;

    //Bloco saída
    printf("A soma dos numeros primos é de : %d \n",soma);
    printf("A média dos numero divisiveis por 3 e maior que 10 é de : %d",media);
    
    
    
}
