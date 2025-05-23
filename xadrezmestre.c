#include <stdio.h>

    void movTorre (int movimento){

        if (movimento > 0)
        {
            movTorre (movimento - 1 );
            printf("Direita\n", movimento);


        }
        
    }

        void movBispo (int movimento){

        if (movimento > 0)
        {
            movBispo (movimento - 1 );
            printf("Direita\n", movimento);
            printf("Cima\n", movimento);

        } 
    }

        void movRainha (int movimento){
        if (movimento > 0)
        {
            movRainha (movimento - 1);
            printf("Esquerda\n", movimento);
        }
        

    }


        void movCavalo (int movimento){
        if (movimento > 0)
        {
            printf("Cima\n", movimento);
            movCavalo (movimento - 1);
        }
        if (movimento == 1)
        {
            printf ("Direita\n", movimento);
        }
        
        
        

    }   



int main (){

    int Torre = 5;
    printf("Movimento Torre \n");
    movTorre(Torre);

    int bispo = 5;
    printf("Movimento Bispo \n");
    movBispo(bispo);

    int rainha = 8;
    printf("Movimento Rainha\n");
    movRainha(rainha);

    int cavalo = 2;
    printf("Movimento Cavalo\n");
    movCavalo(cavalo);


    return 0;
}