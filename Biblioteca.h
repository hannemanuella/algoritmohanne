//bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>
//biblioteca para usar a função time(), para os valores aleatórios não se repetirem
#include <time.h>
//bilioteca para usar a função de potenciação
#include <math.h>
//definido valor máximo
#define Nmax 9
//função Sortear para preencher matriz com valores aleatórios(recebe matriz, linhas, colunas, retorna vazio)
void Sortear(float m[Nmax][Nmax],int l, int c);
//função Preencher para definir os valores de cada posição manualmente(recebe matriz, linhas, colunas, retorna vazio)
void Preencher(float m[Nmax][Nmax],int l, int c);
//função Printmatriz para imprimir a matriz(recebe matriz, linhas, colunas, retorna vazio)
void Printmatriz(float m[Nmax][Nmax],int l, int c);
//função Soma para somar duas matrizes(recebe matrizes, linhas, colunas, retorna vazio)
void Soma(float m1[Nmax][Nmax],float m2[Nmax][Nmax],float m3[Nmax][Nmax], int l, int c);
//função Sub para subtrair duas matrizes(recebe matrizes, linhas, colunas, retorna vazio)
void Sub(float m1[Nmax][Nmax],float m2[Nmax][Nmax],float m3[Nmax][Nmax], int l, int c);
//função Mult para multiplicar duas matrizes(recebe matrizes, linhas, colunas, retorna vazio)
void Mult(float m1[Nmax][Nmax],float m2[Nmax][Nmax],float m3[Nmax][Nmax], int l, int c, int c1);
//função Ler faz a leitura de uma matriz em arquivo de texto(recebe matriz, vetor auxiliar com linha e coluna, retorna vazio)
void Ler(float m[Nmax][Nmax],int aux[1]);
//função Escrever faz a escrita de uma matriz em arquivo de texto(recebe matriz, linhas, colunas, retorna vazio)
void Escrever(float m[Nmax][Nmax], int l, int c);
