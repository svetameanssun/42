#include <stdio.h>

int main (void)
{
    unsigned int  size = 10;
    char source[4] = "dgd";
    char destination[10];
    ft_strncpy(destination, source,  size);
    printf("%s", destination);
    return 0;
} 