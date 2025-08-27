#include "./myoutput.h"


void exibirVetores(int *a, int *b, int n) {
  for(int i=0; i<n; i++)
    printf("A[%d] = %d, B[%d] = %d\n\n\n", i+1, a[i], i+1, b[i]);
}

void resultadoq2(float med, int idx, float max, int acima) {
    printf("Média: %.2f\nDia mais quente: %d (%.2f)\nDias acima da média: %d\n", med, idx+1, max, acima);
}

void resultadoq4(int m1, int p1, int m2, int p2) {
    printf("Maior: %d (pos %d)\nSegundo maior: %d (pos %d)\n", m1, p1, m2, p2);
}

void resultadoq5(float d) {
    printf("Desvio-padrão: %.4f\n", d);
}

void resultadoq6(int valor) {
    printf("Mais repetido: %d\n", valor);
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