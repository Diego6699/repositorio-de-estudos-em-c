#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int a = 9;
    switch(a)
    {
    case 0:
        printf("numero 0");
        break;
    case 1:
        printf("numero 1");
        break;
    case 2:
        printf("numero 2");
        break;
    default:
        printf("numero fora do range");
    }
    return 0;
}
