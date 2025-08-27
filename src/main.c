#include "./myinput.h"
#include "./mycomputing.h"
#include "myoutput.h"

void questao1(){
    /* Autor: Kauan Souza
    * Problema: Desenvolva um programa que preencha um vetor A com trinta números inteiros. Em seguida deve-se copiar os elementos do vetor A para um outro vetor B de tal forma que seus elementos fiquem invertidos, ou seja, o 1º elemento de A passa a ser o último de B, o 2º elemento de A passa a ser o penúltimo e A assim por diante. Ao final deve-se exibir os dois vetores, um par de elementos por linha:
    * A[1] = ??, B[1] = ??
    * A[2] = ??, B[2] = ??
    * A[3] = ??, B[3] = ??
    */
    int a[30], b[30];
    ler_inteiros(a, 30);
    inverterVetor(a, b, 30);
    exibirVetores(a, b, 30);
}

void questao2(){
    /* Autor: Kauan Souza
    * Problema: Desenvolver um programa que receba o mês (número obrigatoriamente
    * entre 1 e 12) e preencha um vetor com temperaturas (graus Celsius) para cada
    * dia daquele mês. A partir do vetor de temperaturas, o programa deve exibir a
    * média das temperaturas do mês, dia mais quente e quantos dias tiveram temperatura
    * acima da média. Considerar que a quantidade de temperaturas pode variar de acordo
    * com mês de 28 a 31 valores.
    */
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
    /* Autor: Kauan Souza
    * Problema: Desenvolva um programa que receba as notas de vinte estudantes
    * em um vetor. Em seguida, receba também dois valores (i,j) quaisquer
    * correspondentes às duas posições do vetor (esses valores não podem extrapolar
    * o tamanho do vetor e devem ser diferentes entre si). O programa deverá exibir
    * o vetor, trocar as notas entre as posições i e j, e exibir novamente o vetor após
    * a troca.
    */
    float notas[20];
    int i, j;
    ler_floats(notas, 20);
    ler_dois_int(&i, &j);
    exibirNotas(notas, 20);
    trocarNotas(notas, i, j);
    exibirNotas(notas, 20);
}

void questao4() {
    /* Autor: Kauan Souza
    * Problema: Desenvolver um programa que preencha um vetor com trinta
    * números obrigatoriamente diferentes entre si e exiba os dois maiores valores
    * e suas respectivas posições no vetor.
    */
    int v[30], m1, p1, m2, p2;
    ler_inteiros(v, 30);
    doisMaiores(v, 30, &m1, &p1, &m2, &p2);
    resultadoq4(m1, p1, m2, p2);
}

void questao5() {
    /* Autor: Kauan Souza
    * Problema: Desenvolver um programa que preencha um vetor de números reais com
    * capacidade para armazenar até duzentos valores e exiba o desvio-padrão calculado
    * através da expressão:
    * d = sqrt((1/(n-1)) * sum_{i=0}^{n-1} (V[i] - m)^2)
    * onde V é o vetor e m é sua média. Considere "n" informado pelo
    * usuário que representa quantidade de elementos do vetor a ser considerado no
    * cálculo do desvio-padrão.
*/
    float v[200], m, d;
    int n;
    ler_inteiro(&n);
    preencher(v, n);
    m = media(v, n);
    d = desvioPadrao(v, n, m);
    resultadoq5(d);
}

void questao6() {
    /* Autor: Kauan Souza
    * Problema: Desenvolver um programa que preencha um vetor com quarenta números
    * e exiba o elemento que mais se repete no vetor. Opcionalmente pode-se preencher
    * o vetor com valores aleatórios (função de sorteio de números).
    */
    int v[40];
    ler_inteiros(v, 40);
    exibir(v, 40);
    resultadoq6(maisRepetido(v, 40));
}

void questao7() {
    /* Autor: Kauan Souza
    * Problema: Palíndromos são palavras ou frases que podem ser lidas da
    * esquerda para a direita ou da direita para a esquerda, guardando a mesma
    * grafia. Desenvolva um programa que permita ao usuário digitar uma frase
    * de máximo 1000 caracteres e informe se a frase ou palavra é palíndromo ou
    * não.
    */
    char frase[1001], norm[1001];
    lerFrase(frase, 1001);
    normalizar(frase, norm);
    resultadoq7(ehPalindromo(norm));
}

void questao8() {
    /* Autor: Kauan Souza
    * Problema: Um programa livre de entrada é aquele capaz de receber qualquer
    * tipo de dados, seja ele números, letras, sinais ortográficos, entre outros.
    * Desenvolva um programa livre de entrada que receba qualquer sequência com
    * no máximo 256 caracteres ASCII e informe se se trata: a) NOME; b) NÚMERO INTEIRO;
    * c) NÚMERO REAL-vírgula é o separador da parte fracionária;
    * d) SEQUÊNCIA ALFANUMÉRICA. A verificação deve ser calculada,
    * isto é, deve ser realizada sem uso das funções de conversão da linguagem.
    */
    char seq[257];
    ler_entrada(seq, 257);
    classificar(seq);
}

void questao9() {
    /* Autor: Kauan Souza
    * Problema: Desenvolver um programa que preencha três vetores com números. O primeiro vetor
    * (A) possui cinco elementos e só deve aceitar valores positivos, o segundo (B) possui o triplo
    * de elementos do primeiro, enquanto que o terceiro vetor (C) possui quantidade de elementos correspondente
    * à soma de elementos dos dois primeiros. Após preenchimento, deve-se copiar os elementos dos três vetores
    * para um quarto vetor (D) de tal forma que os elementos em D estejam dispostos na forma D = [C B A].
    * Ao final, o programa deve exibir os elementos de D e a posição de seu menor elemento, indicando qual é seu vetor de origem,
    * ou seja, se o menor elemento de D pertence à A, B ou C.
    */

    int A[5], B[15], C[20], D[40], menor, pos;
    char origem;
    preencherA(A, 5);
    preencherB(B, 15);
    preencherC(C, 20);
    montarD(C, 20, B, 15, A, 5, D);
    exibir(D, 40);
    menorD(D, 40, 5, 15, 20, &menor, &pos, &origem);
    resultadoq9(menor, pos, origem);
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
            default: printf("Opcao invalida!\n\n"); break;
        }
    } while (opcao!=0);
}
