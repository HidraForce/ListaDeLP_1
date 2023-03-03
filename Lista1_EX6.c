#include <stdio.h>

int main()
{
    int i=0,num[10];
    for ( i = 0; i < 10; i++)
    {
       printf("Insira um numero\n-->");
       scanf("%d",&num[i]);
    }

    int j=0,k;
    int fatorial;
    for ( j = 0; j < 10; j++)
    {
      int count = num[j] - 1;
        for ( count; k > 0; k--)
        {
           fatorial = num[j]*k;
           num[j]==fatorial;
        }
        
        
    }
    int l = 0;
    for ( l = 0; l < 10; l++)
    {
       printf("%d\n",num[l]);
    }
    
    
    
}
