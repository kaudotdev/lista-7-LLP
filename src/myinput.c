#include "./myinput.h"



void ler_inteiros(int *v, int n) {
    for(int i=0; i<n; i++) {
        printf("Insira um numero inteiro:\n");
        scanf("%d", v+i);
    }
}

void ler_inteiro(int *x) {
    printf("Insira um numero inteiro: \n");
    scanf("%d", x);
}

void ler_float(float *x) {
    printf("Insira um numero real:\n");
    scanf("%f", x);
}

void ler_temperaturas(float *v, int n) {
    for(int i=0; i<n; i++) {
        printf("Insira uma temperatura (em float): \n");
        ler_float(v+i);
    }
}

void ler_floats(float *v, int n) {
    for(int i=0; i<n; i++) {
        printf("Insira um numero real: \n");
        scanf("%f", v+i);
    }
}

void ler_dois_int(int *i, int *j) {
    printf("Insira dois números inteiros: \n");
    scanf("%d%d", i, j);
}


int menu()
{
    int opcao;

    printf("Selecione a questao:\n");
    printf("1. Questao 1\n");
    printf("2. Questao 2\n");
    printf("3. Questao 3\n");
    printf("4. Questao 4\n");
    printf("5. Questao 5\n");
    printf("6. Questao 6\n");
    printf("7. Questao 7\n");
    printf("8. Questao 8\n");
    printf("9. Questao 9\n");
    printf("0. Sair\n");

    scanf("%i",&opcao);

    return opcao;
}
