#include <stdio.h>

int main()
{
    int i=0,num[10];
    for ( i = 0; i < 10; i++)
    {
       printf("Insira um numero\n-->");
       scanf("%d",&num[i]);
    }

    int j=0,k=0;
    int fatorial[10];
    for ( j = 0; j < 10; j++)
    {
        for ( num[j]+1; k > 0; k--)
        {
           fatorial[j] = num[j]*k;
        }
        
    }
    int l = 0;
    for ( l = 0; l < 10; l++)
    {
       printf("%d\n",fatorial[l]);
    }
    
    
    
}
