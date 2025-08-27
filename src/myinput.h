#ifndef MYINPUT_H_INCLUDED
#define MYINPUT_H_INCLUDED

#include <stdio.h>

void preencheVetor(float v[],int n);
void ler_inteiro(int *x);
void ler_inteiros(int *v, int n);
void ler_float(float *x);
void ler_temperaturas(float *v, int n);
void ler_floats(float *v, int n);
void ler_dois_int(int *i, int *j);
void lerFrase(char *str, int max);
void ler_entrada(char *s, int max);
void preencherA(int *a, int n);
void preencherB(int *b, int n);
void preencherC(int *c, int n);

int menu();

#endif // MYINPUT_H_INCLUDED
