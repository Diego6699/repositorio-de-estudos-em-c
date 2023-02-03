#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num = 123;
    int *ponteiro = &num;
    printf("%d", *ponteiro);
    return 0;
}
