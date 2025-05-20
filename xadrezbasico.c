#include <stdio.h>


int main (){
    int torre1;
    int bispo1 = 1;
    int rainha = 1;

    printf("Movimento Torre!\n");
    for (int torre1 = 0; torre1 <= 4; torre1++)
    {
       printf("Direita\n");
    }

    printf("Movimento Bispo!\n");

    while (bispo1 <= 5){
       printf("Cima,Direita\n");
       bispo1++;
    }


    printf("Movimento Rainha!\n");

    do
    {
       printf("Esquerda\n");
       rainha++;
    } while (rainha <= 8);
    
    











    return 0;
}