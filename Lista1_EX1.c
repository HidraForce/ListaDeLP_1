/*Escreva um programa utilizando o comando switch que imprimao mês por extenso de acordo com o número digitado pelo usuário(entre 1 e 12).*/
#include <stdio.h>


int main()
{
    unsigned short int mes;
    printf("Insira o numero do Mês desejado: \n");
    scanf("%hu",&mes);

    switch (mes)
    {
    case 1:
        printf("January");
        break;
    
    case 2:
        printf("February\n");
        break;
    
    case 3:
        printf("March");
        break;
    
    case 4:
        printf("April");
        break;
    
    case 5:
        printf("May");
        break;
    
    case 6:
        printf("June");
        break;
    
    case 7:
        printf("July");
        break;
    
    case 8:
        printf("August");
        break;
    
    case 9:
        printf("September");
        break;
    
    case 10:
        printf("October");
        break;
    
    case 11:
        printf("November");
        break;
    
    case 12:
        printf("December");
        break;
    
    default:
        printf("Not a valid month");
        break;
    }
}
