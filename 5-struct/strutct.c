#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    struct aluno
    {
        long id;
        char nome[50];
        int idade;
    };
    struct aluno al;
    al.id = 1234;
    strcpy(al.nome,"Diego");
    al.idade = 21;
    
    printf("id: %ld\tnome: %s\tidade: %d\t",al.id,al.nome,al.idade);
    return 0;
}
