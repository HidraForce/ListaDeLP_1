#include <stdio.h>

int main()
{
    int age[10],weight[10],i=0;
    
    for ( i = 0; i < 10; i++)
    {
        printf("Inisra a idade da %d° pessoa\n-->",i+1);
        scanf("%d",&age[i]);
        printf("Inisra o peso da %d° pessoa\n-->",i+1);
        scanf("%d",&weight[i]);

        
    }
    int j=0,k=0,total_idade,total_old,count_old = 0,count_fat= 0;
    int peso  = weight[0]; 
    for (j = 0; j < 10; j++)
    {
      total_idade = total_idade +age[j];
      if(weight[j]>peso){
        peso =weight[j];
      }

      /* if (age[j]>30 && age[j]<40)
      {
        total_old = total_old +age[j];
        count_old++;

      } */
      weight[j] >70 ?count_fat++:0;
      
      
        
    }
    float media = total_idade/10;
   /*  float media_old = total_old/count_old;
 */
    printf("A média das idades é de: %f\n",media);
    printf("O maior peso é de: %d\n",peso);
   /*  printf("A média das pessoas acima de 30 e com menos de 40 é de: %f\n",media_old); */
    printf("A quantidade de pessoas acima de 70kg é de: %d\n",count_fat);
    
    
}
/**
 * ERRO ATUAL ESTA NO CONTADOR DE PESSOAAS VELHAS
 * 
 * 
*/