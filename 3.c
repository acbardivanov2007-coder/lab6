#include <stdio.h>
int main ()
{
 int i;
 int chet = 0;
 int summ_chet = 0;
 int nechet = 0;
 int summ_nechet = 0;
 float sredne_chet, sredne_nechet;
 printf("введитн целое число или 0 для выхода:\n");
 while (scanf("%d", &i) == 1 && i !=0 )
 {
    if ( (i%2) == 0 )
        {
            chet++;
            summ_chet += i;
        }
    else
        {
            nechet++;
            summ_nechet += i;
        }
 }
 if (chet > 0)
    {
    sredne_chet = summ_chet/(float)chet;
    printf("четных чисел: %d (среднее значение %.0f)\n", chet, sredne_chet);
    }
 if (nechet > 0)
    {
    sredne_nechet = summ_nechet/(float)chet;
    printf("нечетных чисел: %d (среднее значение %.0f)", nechet, sredne_nechet);
    }
return 0;
}
