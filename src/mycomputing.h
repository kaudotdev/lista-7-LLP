#ifndef MYCOMPUTING_H_INCLUDED
#define MYCOMPUTING_H_INCLUDED

void inverterVetor(int *orig, int *dest, int n);
float mediaTemp(float *v, int n);
int maisQuente(float *v, int n);
int acimaMedia(float *v, int n, float m);
int diasMes(int mes);
void trocarNotas(float *v, int i, int j);
void doisMaiores(int *v, int n, int *m1, int *p1, int *m2, int *p2);
void preencher(float *v, int n);
float media(float *v, int n);
float desvioPadrao(float *v, int n, float m);
int maisRepetido(int *v, int n);
int ehLetraOuNumero(char c);
char paraMinusculo(char c);
void normalizar(char *src, char *dst);
int ehPalindromo(char *str);
int eh_nome(char *s);
int eh_inteiro(char *s);
int eh_real(char *s);
int eh_alfanumerica(char *s);
void montarD(int *c, int nc, int *b, int nb, int *a, int na, int *d);
void menorD(int *d, int nd, int na, int nb, int nc, int *menor, int *pos, char *orig);

#endif // MYCOMPUTING_H_INCLUDED
