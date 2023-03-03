#include <stdio.h>

int main()
{
    int age, opn, numOpn2 = 0, numOpn3 = 0, numOpn1 = 0, media = 0, sum = 0;
    do
    {

        printf("Insira sua idade: \n");
        scanf("%d", &age);
        if (age != 0)
        {
            printf("Insira sua avaliação sobre o filme que acabou de assistir:\n-->1 - Regular\n-->2 - Bom\n-->3 - Otímo\n-->");
            scanf("%d", &opn);
            switch (opn)
            {
            case 1:
                numOpn1 = numOpn1 + 1;
                sum = sum + age;
                break;
            case 2:
                numOpn2 = numOpn2 + 1;
                break;
            case 3:
                numOpn3 = numOpn3 + 1;
                break;
            
            default:
                age = 0;
                break;
            }
            
        }

    } while (age != 0);
    if (sum != 0)
    {
        media = sum / numOpn1;
        printf("A media de idade das pessoas que opinaram 1 é de: %d\n", media);
        printf("O numero de pessoas que opinaram REGULAR\né de: %d\n", numOpn2);
        printf("O numero de pessoas que opinaram BOM\né de: %d", numOpn3);
    }
    else
    {
        printf("O numero de pessoas que opinaram REGULAR\né de: %d\n", numOpn2);
        printf("O numero de pessoas que opinaram BOM\né de: %d", numOpn3);
    }
}
