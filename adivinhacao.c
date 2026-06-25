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
}
