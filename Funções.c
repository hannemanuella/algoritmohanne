#include "Biblioteca.h"
//função Sortear para preencher matriz com valores aleatórios(recebe matriz, linhas, colunas, retorna vazio)
void Sortear(float m[Nmax][Nmax],int l, int c)
{
    //variáveis para percorrer a matriz
    int i, j;
    //variavél para gerar valorer do tipo float
    float f1, f2;
    //variavél para trabalhar com vlores positivos e negativos
    int e;
    //gerando semente aletória
    srand(time(NULL));
    //laço para percorrer a matriz
    for(i=0;i<l;i++)
        {
            for(j=0;j<c;j++)
                {
                    e = rand()%2;
                    e = pow(-1,e);
                    f1 = rand()%1000;
                    f2 = rand()%100;
                    m[i][j] = e*f1/f2;
                }
        }
    printf("\nMatriz preechida com sucesso!\n");
}
//função Preencher para definir os valores de cada posição manualmente(recebe matriz, linhas, colunas, retorna vazio)
void Preencher(float m[Nmax][Nmax],int l, int c)
{
    //variáveis para percorrer a matriz
    int i, j;
    //laço para percorrer a matriz
    for(i=0;i<l;i++)
        {
            for(j=0;j<c;j++)
                {
                    printf(" Digite o valor referente a linha %i coluna %i: ", i, j);
                    scanf("%f", &m[i][j]);
                }
        }
    printf("\nmatriz preenchida\n");
}
//função Printmatriz para imprimir a matriz(recebe matriz, linhas, colunas, retorna vazio)
void Printmatriz(float m[Nmax][Nmax],int l, int c)
{
    //variáveis para percorrer a matriz
    int i, j;
    //laço para percorrer a matriz
    printf("\n");
    for(i=0;i<l;i++)
        {
            for(j=0;j<c;j++)
                {
                    printf(" %f ", m[i][j]);
                }
            printf("\n");
        }
    printf("\n");
}
//função Soma para somar duas matrizes(recebe matrizes, linhas, colunas, retorna vazio)
void Soma(float m1[Nmax][Nmax],float m2[Nmax][Nmax],float m3[Nmax][Nmax], int l, int c)
{
    //variáveis para percorrer a matriz
    int i, j;
    //laço para percorrer a matriz
    for(i=0;i<l;i++)
        {
            for(j=0;j<c;j++)
                {
                    //somando as posições e guardando na matriz de resultado
                    m3[i][j] = m1[i][j] + m2[i][j];
                }
        }
    printf("\nSoma realizada com sucesso!\n");
}
//função Sub para subtrair duas matrizes(recebe matrizes, linhas, colunas, retorna vazio)
void Sub(float m1[Nmax][Nmax],float m2[Nmax][Nmax],float m3[Nmax][Nmax], int l, int c)
{
    //variáveis para percorrer a matriz
    int i, j;
    //laço para percorrer a matriz
    for(i=0;i<l;i++)
        {
            for(j=0;j<c;j++)
                {
                    //somando as posições e guardando na matriz de resultado
                    m3[i][j] = m1[i][j] - m2[i][j];
                }
        }
    printf("\nSubtracao realizada com sucesso!\n");
}
//função Mult para multiplicar duas matrizes(recebe matrizes, linhas, colunas, retorna vazio)
void Mult(float m1[Nmax][Nmax],float m2[Nmax][Nmax],float m3[Nmax][Nmax], int l, int c, int c1)
{
    //variáveis para percorrer as matrizes
    int i, j, k;
    //laço para percorrer a matriz resultado
    for(i=0;i<l;i++)
        {
            for(j=0;j<c;j++)
                {
                    //zerando posição
                    m3[i][j] = 0;
                    //laço para percorrer a linha da primeira matriz e a coluna da segunda
                    for(k=0;k<c1;k++)
                        {
                            m3[i][j]= m3[i][j] + m1[i][k]*m2[k][j];
                        }
                }
        }
    printf("\nMultiplicacao realizada com sucesso!\n");
}
//função Ler faz a leitura de uma matriz em arquivo de texto(recebe matriz, vetor auxiliar com linha e coluna, retorna vazio)
void Ler(float m[Nmax][Nmax],int aux[1])
{
    //variáveis para percorrer a matriz
    int i, j;
    //criando ponteiro
    FILE *Matriz;
    //direcionando ponteiro para o arquivo, abrindo e escolhendo operação r para leitura
    Matriz = fopen("Matriz.txt","r");
    //guardando no vetor auxiliar os primeiros numeros do arquivo que devem conter o numero de linhas e de colunas respectivamente
    fscanf(Matriz,"%i %i", &aux[0], &aux[1]);
    //laços para preencher a matriz
    for(i=0; i<aux[0]; i++)
        {
            for(j=0; j<aux[1]; j++)
            {
                fscanf(Matriz, "%f", &m[i][j]);
            }
        }
    //fechando o arquivo
    fclose(Matriz);
    printf("\nMatriz lida com sucesso!\n");
}
//função Escrever faz a escrita de uma matriz em arquivo de texto(recebe matriz, linhas, colunas, retorna vazio)
void Escrever(float m[Nmax][Nmax], int l, int c)
{
    //variáveis para percorrer a matriz
    int i, j;
    //criando ponteiro
    FILE *Matriz;
    //direcionando ponteiro para o arquivo, abrindo e escolhendo operação w para escrita
    Matriz = fopen("Matriz.txt","w");
    //escrevendo no inicio do arquivo o numero de linhas e colunas respectivamente da matriz
    fprintf(Matriz, "%i %i\n", l, c);
    //laços para escrever a matriz
    for(i=0; i<l; i++)
        {
            for(j=0; j<c-1; j++)
            {
                fprintf(Matriz, "%f  ", m[i][j]);
            }
            fprintf(Matriz, "%f\n", m[i][c-1]);
        }
    //fechando o arquivo
    fclose(Matriz);
    printf("\nMatriz escrita com sucesso!\n");
}
