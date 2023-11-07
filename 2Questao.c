//Você é um desenvolvedor de e-commerce e está trabalhando em um novo sistema de descontos. 
//O sistema oferece um desconto de 10% para compras acima de R$ 100,00 se a compra for feita em um dia de semana. 
//Se a compra for feita em um fim de semana, o desconto será de 15% sobre o valor da compra acima de R$ 100,00.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    //Declarando variáveis
    int diaDaSemana;
    int precoFinal;
    int preco;

    //Solicitando dados

    printf("Bem Vindo ao Lojão Else Guinte \n");
    printf("Qual o valor total da compra? ");
    scanf("%i",&preco);

    printf("1 - Domingo \n");
    printf("2 - Segunda \n");
    printf("3 - Terça \n");
    printf("4 - Quarta \n");
    printf("5 - Quinta \n");
    printf("6 - Sexta \n");
    printf("7 - Sábado \n");
    printf("Qual o dia da compra? (digite o número)");
    scanf("%i", &diaDaSemana);

    if (preco >= 100)
    {
    switch (diaDaSemana)
    {
    case 1:
    case 7:
        precoFinal = preco * 0.85;
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        precoFinal = preco * 0.90;
        break;    
    default:
        precoFinal = preco;
        break;
    }
    }

    printf("Valor final: %i", precoFinal);

    return 0;
}