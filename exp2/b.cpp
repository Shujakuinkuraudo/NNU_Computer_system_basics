#include "stdio.h"
int main()
{
    int x = -32768;
    short y = 522;
    unsigned z = 65530;
    char c = '@';
    float a = -1.1;
    double b = 10.5;
    printf("%X,%X,%X,%X,%l,%l",x,y,z,c,a,b);
    return 0;

}