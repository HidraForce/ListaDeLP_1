#include <stdio.h>
unsigned long long int fatorial(int x)
{
    unsigned long long int fat;

    for (fat = 1; x > 1; x = x - 1){
        fat = fat * x;
    }
    return fat;
        
}
//Maximo de 20 infelizmente ele não passa disso

int main()
{
    int i,num;
    
    
    for (i = 0; i < 10; i++)
    {
        printf("Insira um numero: ");
        scanf("%d",&num);
       

        printf("O fatorial de %d é %llu\n",num,fatorial(num));

    }
}
