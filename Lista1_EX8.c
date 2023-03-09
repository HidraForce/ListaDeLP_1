#include <stdio.h>

int main()
{
    int num, tabuada,i=0;

    printf("Insira o numero que deseja: \n-->");
    scanf("%d",&num);
    printf("Insira o Limite da tabuda: \n-->");
    scanf("%d",&tabuada);


    for ( i = 1; i <= tabuada; i++)
    {
        int cal = num * i;
        printf("\nO resultado de %d * %d é:\n-->%d|",num,i,cal);
    }
    
    
}