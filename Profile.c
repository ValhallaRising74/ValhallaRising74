#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

int main(){
    int Idade, calculando, ano, exibe;
    char nome[30];
    setlocale(LC_ALL,"portuguese");
    system("cls");
    printf("Digite idade: ");
    scanf("%d",&Idade);
    printf("Digite seu nome: ");
    scanf("%s",&nome);
    ano = 2024-Idade, calculando;
    printf("Olá, %s,você tem %d anos ,Portanto, você nasceu no ano: %d",nome,Idade ,ano);
    system("pause>>NULL");
    return 0;
}
