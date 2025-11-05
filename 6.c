#include <stdio.h>
int main ()
{
char slovo;
int e = 0; 
int scetchik=0;
printf("введите преддложение с ei или # для выхода:\n");
while ((slovo = getchar()) != '#')
{

    if (slovo == 'e')
        e = 1;
    else if (slovo == 'i' && e == 1)
        {
            scetchik++;
            e = 0;
        }
    else
        e = 0;
}
printf("в вашем предложении вот столько %d ei", scetchik);
return 0;
}
