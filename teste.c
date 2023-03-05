#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(void){
    setlocale(LC_ALL,"Portuguese"); 
    //Questão 1
    int i = 13, k = 0, soma = 0;
    while(k<i){
        k++;
        soma+=k;
    }
    printf("1) O valor da variável SOMA é: %d\n", soma);
    printf("\n");
    //Questão 2
    printf("2) Não consegui fazer :(\n");
    printf("\n");
    //Questão 3
    printf("3)\na) 1, 3, 5, 7, '9'\nb) 2, 4, 8, 16, 32, 64, '128'\nc) 0, 1, 4, 9, 16, 25, 36, '49'\nd) 4, 16, 36, 64, '81'\ne) 2) Não consegui fazer :(\nf) 2,10, 12, 16, 17, 18, 19, '200'\n");
    printf("\n");
    //Questão 4
    printf("4) Não consegui fazer :(\n");
    printf("\n");
    // Questão 5
    #define tam 30
    char string[tam];
    printf("5) Escreva seu nome: ");
    fgets(string, tam,stdin);
    printf("\nNome original é: \n%s", string);
    printf("\nNome invertido é: ");
    for(int i = strlen(string); i >= 0; i--){
        printf("%c",string[i]);
    }
    printf("\n");
    return 0;
}
