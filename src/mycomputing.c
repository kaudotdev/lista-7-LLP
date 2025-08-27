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

int ehLetraOuNumero(char c) {
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        return 1;
    return 0;
}

char paraMinusculo(char c) {
    if(c >= 'A' && c <= 'Z')
        return c + ('a' - 'A');
    return c;
}

void normalizar(char *src, char *dst) {
    int i = 0, j = 0;
    while(src[i]) {
        if(ehLetraOuNumero(src[i])) {
            dst[j++] = paraMinusculo(src[i]);
        }
        i++;
    }
    dst[j] = '\0';
}
int ehPalindromo(char *str) {
    int i = 0, j;
    for(j = 0; str[j]; j++);
    j--;
    while(i < j) {
        if(str[i] != str[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}
int eh_nome(char *s) {
    int i = 0;
    for(; s[i]; i++)
        if(!((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || s[i] == ' '))
            return 0;
    return i > 0;
}

int eh_inteiro(char *s) {
    int i = 0;
    if(s[0] == '-' || s[0] == '+') i++;
    if(s[i] == 0) return 0;
    for(; s[i]; i++)
        if(s[i] < '0' || s[i] > '9')
            return 0;
    return 1;
}

int eh_real(char *s) {
    int i = 0, virg = 0, dig = 0;
    if(s[0] == '-' || s[0] == '+') i++;
    for(; s[i]; i++) {
        if(s[i] == ',') {
            virg++;
            if(virg > 1) return 0;
        } else if(s[i] >= '0' && s[i] <= '9') {
            dig = 1;
        } else {
            return 0;
        }
    }
    return dig && virg == 1;
}

int eh_alfanumerica(char *s) {
    int i = 0, tem_letra = 0, tem_dig = 0;
    for(; s[i]; i++) {
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) tem_letra = 1;
        else if(s[i] >= '0' && s[i] <= '9') tem_dig = 1;
        else return 0;
    }
    return tem_letra && tem_dig;
}
