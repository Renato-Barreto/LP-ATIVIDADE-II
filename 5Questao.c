#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
setlocale(LC_ALL,"portuguese");

//variaveis

int idioma;
int numero;
//codigos
printf("1-Inglês \n");
    
printf("2-Espanhol\n");

printf("3-Francês\n");

printf("Digite o numero para sua linguagem : \n");
scanf("%d",&idioma);
switch (idioma)
{
case 1 :
    printf("Hello welcome");
    break;
case 2 :
    printf("Hola bienvenido");
    break;
case 3 :
    printf("Bonjour bienvenue");
}

 return 0;
}
