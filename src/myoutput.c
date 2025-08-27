#include "./myoutput.h"
#include "./mycomputing.h"


void exibirVetores(int *a, int *b, int n) {
  for(int i=0; i<n; i++)
    printf("A[%d] = %d, B[%d] = %d\n\n\n", i+1, a[i], i+1, b[i]);
}

void resultadoq2(float med, int idx, float max, int acima) {
    printf("Média: %.2f\ndia mais quente: %d (%.2f)\ndias acima da média: %d\n", med, idx+1, max, acima);
}

void resultadoq4(int m1, int p1, int m2, int p2) {
    printf("Maior: %d (pos %d)\nSegundo maior: %d (pos %d)\n", m1, p1, m2, p2);
}

void resultadoq5(float d) {
    printf("Desviopadrão: %.4f\n", d);
}

void resultadoq6(int valor) {
    printf("Mais repetido: %d\n", valor);
}
void resultadoq7(int pal) {
    if(pal)
        printf("É palíndromo\n");
    else
        printf("Não é palíndromo\n");
}
void exibirNotas(float *v, int n) {
    for(int i=0; i<n; i++)
        printf("%.2f ", v[i]);
    printf("\n");
}

void exibir(int *v, int n) {
    for(int i=0; i<n; i++)
        printf("%d ", v[i]);
    printf("\n");
}

void classificar(char *s) {
    if(eh_nome(s))
        printf("é um nome\n");
    else if(eh_inteiro(s))
        printf("é um número inteiro\n");
    else if(eh_real(s))
        printf("é um numero reall\n");
    else if(eh_alfanumerica(s))
        printf("é uma sequencia alfanumerica\n");
    else
        printf("Tipo não identificado\n");
}
void resultadoq9(int menor, int pos, char origem) {
    printf("menor elemento = %d, posição = %d e origem = %c\n", menor, pos, origem);
}