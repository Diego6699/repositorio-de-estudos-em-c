#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char nome [100] = "";
    char nomeCompleto [100] = "";
    //copiar string
    strcpy(nomeCompleto,"Diego Leonardo");
    printf("nome: %s /ntamanho: %d",nomeCompleto,strlen(nomeCompleto));
    return 0;
}
