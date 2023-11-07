#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
setlocale(LC_ALL,"portuguese");

//Declarando variaveis
int opcao;


//Solicitando dados
printf("1-camiseta\n");
printf("2-calça \n");
printf("3-sapato \n");

printf("Digite uma das opções acima :\n");
scanf("%i",&opcao);


switch (opcao)
{
case 1 :
    printf("Produto :camiseta\n");
    printf("Preço : 30,00R$");
    break;
case 2 :
    printf("Produto : calça\n");
    printf("Preço : 25,00R$");
    break;
case 3 :
    printf("Produto : sapato\n");
    printf("Preço : 50,00R$");
}
 return 0;
}
