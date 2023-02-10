#include <stdio.h>
#include<string.h>

int main()
{
    typedef struct
    {
        int cpf;
        char nome[50];
        int idade;
    } pessoa;

    pessoa p1;
    strcpy(p1.nome,"diego");
    p1.cpf = 123;
    p1.idade = 21;

    pessoa p2 = {123,"diego", 21};
    pessoa p3 = p2;
    return 0;
}