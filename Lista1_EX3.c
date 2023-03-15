#include <stdio.h>
#include <stdlib.h>
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

int dive_tres(int x)
{
    if (x % 3 != 0)
    {
        if (x > 10)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}

int main()
{
    int i, num, soma = 0, soma2 = 0, count = 0,media ;
    for (i = 0; i < 10; i++)
    {
        printf("Insira UM NUMERO: \n-->");
        scanf("%d", &num);
        if (teste_primo(num) == 1)
        {
            soma = soma + num;
        }
        if (dive_tres(num) == 1){
            soma2 = soma2 +num;
            count++;
        }
    }
    if(count>0 ){
       media = soma2 /count;
    }else{
        media = 0;
    }

    printf("Soma dos primos igual a : %d\n", soma);
    printf("A média dos numero divisiveis por 3 e maior que 10 é de : %d",media);
}
