#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    
    //Definindo vari�veis
    char clima [250];
    int grausCelsius;

    //Solicitando informa��es

    printf("Qual a temperatura em celsius?");
    scanf("%i",&grausCelsius);
    system("cls || clear");

    if (grausCelsius < 15)
    {
        strcpy(clima, "Chuvoso");
    } else if (grausCelsius >= 15 && grausCelsius <= 25)
    {
        strcpy(clima, "Nublado");
    } else if (grausCelsius > 25)
    {
        strcpy(clima, "Ensolarado");
    }
    
    printf("O clima est�: %s", clima);

    
    






    return 0;
}