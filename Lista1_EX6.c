#include <stdio.h>

int main()
{
    int i=0,num[10],fat[10],j=0,k=0,p=0;
    for ( i = 0; i < 10; i++)
    {
       printf("Insira um numero\n-->");
       scanf("%d",&num[i]);
    }

   for ( j = 0; j < 10; j++)
   {
      for (k = 0; k < num[j]; k++)
      {
         num[j] = num[j] * k;
      }
      
   }
   
   for ( p = 0; p < 10; p++)
   {
      int count = p+1;
      printf("O fatorial do %d° é: %d\n",count, num[p]);
   }
   

    
    
}
