//bibliotecas padr�o
#include <stdio.h>
#include <stdlib.h>
//biblioteca para usar a fun��o time(), para os valores aleat�rios n�o se repetirem
#include <time.h>
//bilioteca para usar a fun��o de potencia��o
#include <math.h>
//definido valor m�ximo
#define Nmax 9
//fun��o Sortear para preencher matriz com valores aleat�rios(recebe matriz, linhas, colunas, retorna vazio)
void Sortear(float m[Nmax][Nmax],int l, int c);
//fun��o Preencher para definir os valores de cada posi��o manualmente(recebe matriz, linhas, colunas, retorna vazio)
void Preencher(float m[Nmax][Nmax],int l, int c);
//fun��o Printmatriz para imprimir a matriz(recebe matriz, linhas, colunas, retorna vazio)
void Printmatriz(float m[Nmax][Nmax],int l, int c);
//fun��o Soma para somar duas matrizes(recebe matrizes, linhas, colunas, retorna vazio)
void Soma(float m1[Nmax][Nmax],float m2[Nmax][Nmax],float m3[Nmax][Nmax], int l, int c);
//fun��o Sub para subtrair duas matrizes(recebe matrizes, linhas, colunas, retorna vazio)
void Sub(float m1[Nmax][Nmax],float m2[Nmax][Nmax],float m3[Nmax][Nmax], int l, int c);
//fun��o Mult para multiplicar duas matrizes(recebe matrizes, linhas, colunas, retorna vazio)
void Mult(float m1[Nmax][Nmax],float m2[Nmax][Nmax],float m3[Nmax][Nmax], int l, int c, int c1);
//fun��o Ler faz a leitura de uma matriz em arquivo de texto(recebe matriz, vetor auxiliar com linha e coluna, retorna vazio)
void Ler(float m[Nmax][Nmax],int aux[1]);
//fun��o Escrever faz a escrita de uma matriz em arquivo de texto(recebe matriz, linhas, colunas, retorna vazio)
void Escrever(float m[Nmax][Nmax], int l, int c);
