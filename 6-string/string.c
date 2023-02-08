#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = strcmp("diego", "diego");
    if (a == 0)
    {
        printf("sao iguais: %d",a);
    }
    else if (a < 0)
    {
        printf("str 1 e menor: %d",a);
    }
    else
    {
        printf("str 1 e maior: %d",a);
    }

    return 0;
}
