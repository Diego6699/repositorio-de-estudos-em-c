#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    char c;
    printf("digite o caractere: ");
    scanf("%c",&c);
    fgetchar();
    printf("%c",c);
    return 0;
}
