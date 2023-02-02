#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    char nome[20] = "diego leonardo";
    int i = 0;
    while(i < 20){
        printf("%d\t%c\n",i,nome[i]);
        i++;
    }
}
