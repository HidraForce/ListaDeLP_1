#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age, med, count = 0, total = 0;

    do
    {

        printf("Insira sua idade: \n-->");
        scanf("%d", &age);
        total = total + age;
        count = count + 1;

    } while (age != 0);
    med = total / count;

    med > 0 ? printf("Média igual a : %d\n", med) : printf("Erro");
}
