#include "./mycomputing.h"
#include "./myinput.h"

#include <math.h>


void inverterVetor(int *orig, int *dest, int n) {
    for(int i=0; i<n; i++)
        dest[i] = orig[n-1-i];
}

float mediaTemp(float *v, int n) {
    float soma = 0;
    for(int i=0; i<n; i++) soma += v[i];
    return soma/n;
}

int maisQuente(float *v, int n) {
    int idx = 0;
    for(int i=1; i<n; i++)
        if(v[i] > v[idx]) idx = i;
    return idx;
}

int acimaMedia(float *v, int n, float m) {
    int c=0;
    for(int i=0; i<n; i++)
        if(v[i]>m) c++;
    return c;
}

int diasMes(int mes) {
    if(mes==2) return 28;
    if(mes==4 || mes==6 || mes==9 || mes==11) return 30;
    return 31;
}

void trocarNotas(float *v, int i, int j) {
    float aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}

void doisMaiores(int *v, int n, int *m1, int *p1, int *m2, int *p2) {
    *m1 = *m2 = v[0];
    *p1 = *p2 = 0;
    for(int i=1; i<n; i++) {
        if(v[i] > *m1) {
            *m2 = *m1; *p2 = *p1;
            *m1 = v[i]; *p1 = i;
        } else if(v[i] > *m2) {
            *m2 = v[i]; *p2 = i;
        }
    }
}

void preencher(float *v, int n) {
    for(int i=0; i<n; i++)
        ler_float(v+i);
}

float media(float *v, int n) {
    float soma = 0;
    for(int i=0; i<n; i++) soma += v[i];
    return soma/n;
}

float desvioPadrao(float *v, int n, float m) {
    float soma=0;
    for(int i=0; i<n; i++)
        soma += (v[i]-m)*(v[i]-m);
    return sqrt(soma/(n-1));
}

int maisRepetido(int *v, int n) {
    int i, j, maxCount = 0, val = v[0];
    for(i = 0; i < n; i++) {
        int count = 0;
        for(j = 0; j < n; j++) {
            if(v[j] == v[i])
                count++;
        }
        if(count > maxCount) {
            maxCount = count;
            val = v[i];
        }
    }
    return val;
}