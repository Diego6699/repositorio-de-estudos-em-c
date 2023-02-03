#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char saudacao [20] = "Ola, ";
    char saudacao2 [100] = "mundo!";
    //copiar string
    strcat(saudacao,saudacao2),
    printf("%s",saudacao);
    return 0;
}
