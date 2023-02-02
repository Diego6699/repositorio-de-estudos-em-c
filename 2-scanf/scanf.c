#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    for (int i = 0; i< 10;i++){
        printf("numero\t%d\n",i);
    }
}
