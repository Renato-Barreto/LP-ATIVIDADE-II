#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
setlocale(LC_ALL,"portuguese");

//Declarando variaveis
int opcao;

//Solicitando Dados
printf ("1-Novo jogo\n");
printf("2-Carregar jogo\n");
printf("3-Configurações\n");
printf("Digite uma das opções\n");
scanf("%i",&opcao);

system ("clear || cls");

switch (opcao)
{
case 1 :
    printf("Seja Bem-Vindo ao jogo\n");
    printf("começaremos pelos tutorias\n");
    break;
case 2 :
    printf("Carregando jogo\n");
    printf("Bem vindo velho amigo\n");
    break;
case 3 :
    printf("Configurações\n");
    printf ("Graficos\n");
    printf("Audio\n");
    printf ("controle\n");
    break;
    default:
    printf("Invalido");
    break;
}
 return 0;
}
