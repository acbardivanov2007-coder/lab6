#include <stdio.h>
int main()
{
    char id = 18 % 10 + 1;        
    const char count_z = 11;
    char z1 = 1 + (count_z % id);  
    char z2 = 4 + (count_z % id);  
    char z3 = (7 + (count_z % id)) % (count_z + 1);  
    printf("z1 = %d\n", z1);
    printf("z2 = %d\n", z2);
    printf("z3 = %d\n", z3);
    return 0;
}
