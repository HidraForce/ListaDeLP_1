#include <stdio.h>
int fatorial(int x)
{
    int fat;

    for (fat = 1; x > 1; x = x - 1){
        fat = fat * x;
    }
    return fat;
        
}

int main()
{
    int i,num,fat[10];
    for (i = 0; i < 10; i++)
    {
        printf("Insira um numero: ");
        scanf("%d",&num);

        fat[i] = fatorial(num);

        printf("O fatorial de %d é %d\n",num,fatorial(num));

    }
}
