#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int num[5] = {1, 2, 3, 4, 5};
    int *ponteiro = num;
    for (int i = 0; i < sizeof(num) / sizeof(int); i++)
    {
        printf("%d", *(ponteiro + i));
    }
    return 0;
}
