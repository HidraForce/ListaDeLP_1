#include <stdio.h>

int main()
{
   /**
    * Var declaration
    */
   int i = 0, num[10], fat[10], j = 0, k = 0, p = 0;
   int fatorial;
   
   /**
    * Input loop
    */
   for (i = 0; i < 10; i++)
   {
      printf("Insira um numero\n-->");
      scanf("%d", &num[i]);
   }

   /**
    * Calculation loop
    */
   for (j = 0; j < 10; j++)
   {
      fatorial = 1;
      for (k = 1; k <= num[j]; k++)
      {
         fatorial = fatorial * k;
      }
      fat[j] = fatorial;
   }

   /**
    * Output loop
    */
   for (p = 0; p < 10; p++)
   {
      printf("O fatorial do é: %d\n", fat[p]);
   }
}
