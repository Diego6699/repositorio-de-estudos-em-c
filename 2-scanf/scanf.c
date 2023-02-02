#include <stdio.h>
#include <string.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    char nome [3][3] = {{2,4,6},{1,3,5}};
    int a = strlen(nome);
    printf("%d",a);

}
