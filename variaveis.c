#include <stdio.h>

int main(){
    int idade;
    int quantidade;
    float altura;
    double peso;
    char letra;
    char nome; 
/*
    printf("A idade do %s é: %d\n", nome, idade);
    printf("A altura é: %.2f\n", altura);
    printf("A opção é: %c\n", letra);
*/
    printf("Qual é sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Qual sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %f\n", altura);

    printf("Qual seu nome: ");
    scanf(" %s", nome);
    printf("O seu nome é: %s", nome);
}
