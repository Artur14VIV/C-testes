#include <stdio.h>
#include <windows.h>
int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numerosecreto = 42;
    int chute;

     printf("Qual é o seu chute? ");
     scanf("%d", &chute);
     printf("%d esse foi o seu chute", chute);
}
    if(chute == numerosecreto) {
        printf("Parabéns! Você acertou!\n");
        printf("Jogue de novo, você é um bom jogador!\n");
    }
    else {
        printf("Parabéns! Você errou!\n");
        printf("Mas não desanime, tente de novo!\n");
}

