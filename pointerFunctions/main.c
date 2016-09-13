#include <stdio.h>
#include "utils.h"

int ft_atoi(char *nmb)
{
    long nr=0;
    int sign = 1;
    while(*nmb <=32 )
        nmb++;
    if (*nmb == 45)
    {
            sign *= -1;
            nmb++;
        
    }
    
    while(*nmb>='0' && *nmb<='9' && *nmb)
    {
        nr = nr * 10 + (*nmb)-48;
        nmb++;
    }
    return (int)nr*sign;
}

int main(int argc, char **argv)
{
    char iaka=argv[argc-1][0];
    iaka ='0';
    printf("Hello, World!\n");
    char *ch = "-873";
    printf("Iaka %d \n", ft_atoi(ch));
    return iaka-48;
}

