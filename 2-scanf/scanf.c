#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int num [2][2] = { {1,2},{1,2} };

    for(int i = 0;i < 2;i++){
        for(int j = 0; j < 2; j++){
            printf("numero[%d][%d] = %d\n",i,j,num[i][j]);
        }
    }
}
