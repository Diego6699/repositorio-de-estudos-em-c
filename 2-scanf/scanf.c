#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int a = 1;
    if(a){
        printf("%d", a);
        printf("%", a);
    }else{
        printf("negativo");
    }
    return 0;
}
