#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    // varivel unica
    struct
    {
        char nome[50];
        int idade;
    } pessoa;
    // sem typedef
    struct aluno
    {
        long id;
        char nome[50];
        int idade;
    };
    typedef struct
    {
        long id;
        char nome[50];
        int idade;
    } professor;

    // usando struturas diferentes;
    strcpy(pessoa.nome, "diego");
    pessoa.idade = 21;

    struct aluno diego;
    diego.id = 12345l;
    strcpy(diego.nome, "diego");
    diego.idade = 21;

    professor paulo;
    paulo.id = 4321;
    strcpy(paulo.nome, "diego");
    paulo.idade = 45;

    return 0;
}
