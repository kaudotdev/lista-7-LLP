#include "./myinput.h"
#include "./mycomputing.h"
#include "myoutput.h"

void questao1(){
    int a[30], b[30];
    ler_inteiros(a, 30);
    inverterVetor(a, b, 30);
    exibirVetores(a, b, 30);
}

void questao2(){
    int mes, ndias, idx;
    float temp[31], med;
    ler_inteiro(&mes);
    ndias = diasMes(mes);
    ler_temperaturas(temp, ndias);
    med = mediaTemp(temp, ndias);
    idx = maisQuente(temp, ndias);
    resultadoq2(med, idx, temp[idx], acimaMedia(temp, ndias, med));
}

void questao3() {
    float notas[20];
    int i, j;
    ler_floats(notas, 20);
    ler_dois_int(&i, &j);
    exibirNotas(notas, 20);
    trocarNotas(notas, i, j);
    exibirNotas(notas, 20);
}

void questao4() {
    int v[30], m1, p1, m2, p2;
    ler_inteiros(v, 30);
    doisMaiores(v, 30, &m1, &p1, &m2, &p2);
    resultadoq4(m1, p1, m2, p2);
}

void questao5() {
    float v[200], m, d;
    int n;
    ler_inteiro(&n);
    preencher(v, n);
    m = media(v, n);
    d = desvioPadrao(v, n, m);
    resultadoq5(d);
}

void questao6() {
    int v[40];
    ler_inteiros(v, 40);
    exibir(v, 40);
    resultadoq6(maisRepetido(v, 40));
}

void questao7() {

}

void questao8() {

}

void questao9() {

}

int main() {
    int opcao;
    do {
        opcao = menu();
        switch (opcao) {
            case 1: questao1(); break;
            case 2: questao2(); break;
            case 3: questao3(); break;
            case 4: questao4(); break;
            case 5: questao5(); break;
            case 6: questao6(); break;
            case 7: questao7(); break;
            case 8: questao8(); break;
            case 9: questao9(); break;
            default: printf("Opcao invalida!\n"); break;
        }
    } while (opcao!=0);
}
