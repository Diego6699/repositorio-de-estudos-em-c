#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    char num [] = "diego leonardo da silva frança";
    int len = sizeof(num)/sizeof(num[0]);
    for(int i = 0; i < len; i++)
{
    printf("%d\t%c\n",i,num[i]);
    }
}
