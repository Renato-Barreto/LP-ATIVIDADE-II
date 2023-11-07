//Implemente um programa que solicite do usuÃ¡rio nÃºmeros inteiros e verifique quantos nÃºmeros sÃ£o pares 
//e quantos sÃ£o Ã­mpares. AlÃ©m disto, deve ser exibido a mÃ©dia aritmÃéica de números pares e impares. 
//Deve-se interromper a leitura dos dados quando for digitado um valor negativo.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    //Definindo Variáveis
    int i = 1;
    int pares = 0;
    int impares = 0;
    int somapares = 0;
    int somaimpares = 0;
    int mediaPares;
    int mediaImpares;
    int valor;

    //Solicitando dados
        do
        {
        printf("Informe o %i° valor: ", i);
        scanf("%i", &valor);

        if (valor > 0)
        {
        if (valor %2 == 0)
        {
            pares ++;
            somapares += valor;
        } else {
            impares ++;
            somaimpares += valor;
        }

        i++;
        }
        


        } while (valor > 0);

        mediaPares = somapares / pares;
        mediaImpares =  somaimpares / impares;


printf("Quantidade de números pares: %i \n", pares);
printf("Quantidade de números impares: %i \n", impares);
printf("Média de números pares: %i \n", mediaPares);
printf("Média de números impares: %i ", mediaImpares);




return 0;

}