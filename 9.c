#include <stdio.h>
int main ()
{
int prost_chislo;
int i;
int sost; 
printf("введите любое положительное число or q для выхода\n");
for (scanf ("%d", &prost_chislo) == 1; prost_chislo>1; prost_chislo--)
{
    for (i=prost_chislo-1, sost = 0; prost_chislo > 1 && i > 1; i--)
    {
        if (prost_chislo % i == 0)
            sost = 1;
    }
    if (sost != 1)
        printf("%d ", prost_chislo);
}
return 0;
}
