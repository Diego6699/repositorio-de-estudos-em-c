#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    typedef struct
    {
        int cpf;
        char nome[50];
    } Pessoa;

    typedef struct
    {
        Pessoa pessoa;
        int matricula;
    }Aluno;

    Aluno aluno;
    strcpy(aluno.pessoa.nome,"diego");
    aluno.pessoa.cpf = 123456789;
    aluno.matricula = 43211234;
    printf("cpf: %d\nnome: %s\nmatricula: %d",aluno.pessoa.cpf,aluno.pessoa.nome,aluno.matricula);
    
}
