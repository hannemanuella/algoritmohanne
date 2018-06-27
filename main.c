//Biblioteca criada para o projeto
#include "Biblioteca.h"

void main(void)
{
    //vetor auxiliar passagem de parametros por referencia do numero de colunas e de linhas na manipula��o que arquivos de texto
    int aux[1];
    //vari�vel para manter o loop do menu
    int n = 0;
    //vari�vel de opera��o
    int x = 1;
    //declarando as matrizes e seus parametros
    float A[Nmax][Nmax], B[Nmax][Nmax], C[Nmax][Nmax];
    int Ai, Aj, Bi, Bj, Ci, Cj;

    //loop do menu
    while(n == 0)
    {
        //lista de op��es
        printf("\nPROGRAMA DE MANIPULACAO DE MATRIZES\n(1) Definir o tamanho da matriz A\n(2) Definir o tamanho da matriz B\n(3) Preencher a matriz A com valores aleatorios\n(4) Preencher a matriz B com valores aleatorios\n(5) Atribuir valores manualmente para os elementos da matriz A\n(6) Atribuir valores manualmente para os elementos da matriz B\n(7) Calcular A+B\n(8) Calcular A-B\n(9) Calcular A*B\n(10) Imprimir matriz A\n(11) Imprimir matriz B\n(12) Imprimir matriz C\n(13) Ler a matriz A de um arquivo\n(14) Ler a matriz B de um arquivo\n(15) Escrever a matriz C em um arquivo\n(16) Sair\nDigite a operacao: ");
        scanf("%i", &x);
        //sele�ao da op��o
        switch(x)
        {
            case 1 :
                //Definindo tamanho da matriz A
                //linha
                printf("\nQuantidade de linhas A(valor maximo %i): ", Nmax+1);
                scanf("%i", &Ai);
                //regra para garantir os parametros
                if(Nmax<Ai-1 || Ai <= 0)
                    {
                        while((Nmax<Ai-1 || Ai <= 0))
                            {
                                printf("\nValor invalido!\nDigite outro valor: ");
                                scanf("%i", &Ai);
                            }
                    }
                //coluna
                printf("\nQuantidade de colunas A(valor maximo %i): ", Nmax+1);
                scanf("%i", &Aj);
                //regra para garantir os parametros
                if(Nmax<Aj-1 || Aj <= 0)
                    {
                        while((Nmax<Aj-1 || Aj <= 0))
                            {
                                printf("\nValor invalido!\nDigite outro valor: ");
                                scanf("%i", &Aj);
                            }
                    }
            break;
            case 2 :
                //Definindo tamanho da matriz A
                //linha
                printf("\nQuantidade de linhas B(valor maximo %i): ", Nmax+1);
                scanf("%i", &Bi);
                //regra para garantir os parametros
                if(Nmax<Bi-1 || Bi <= 0)
                    {
                        while((Nmax<Bi-1 || Bi <= 0))
                            {
                                printf("\nValor invalido!\nDigite outro valor: ");
                                scanf("%i", &Bi);
                            }
                    }
                //coluna
                printf("\nQuantidade de colunas B(valor maximo %i): ", Nmax+1);
                scanf("%i", &Bj);
                //regra para garantir os parametros
                if(Nmax<Bj-1 || Bj <= 0)
                    {
                        while((Nmax<Bj-1 || Bj <= 0))
                            {
                                printf("\nValor invalido!\nDigite outro valor: ");
                                scanf("%i", &Bj);
                            }
                    }
            break;
            case 3 :
                //preencher matriz A aleatoriamente
                Sortear(A, Ai, Aj);
            break;
            case 4 :
                //preencher matriz B aleatoriamente
                Sortear(B, Bi, Bj);
            break;
            case 5 :
                //preencher matriz A manualmente
                Preencher(A, Ai, Aj);
            break;
            case 6 :
                //preencher matriz B manualmente
                Preencher(B, Bi, Bj);
            break;
            case 7 :
                //condi��o para garantir uma soma possivel de matrizes
                if(Ai==Bi && Aj==Bj)
                {
                    Ci = Ai;
                    Cj = Aj;
                    //soma matriz A com B
                    Soma( A, B, C, Ci, Cj);
                }
                else
                {
                    printf("\nAs matrizes possuem dimensoes diferentes, nao e possivel efetuar a operacao.\n");
                }
            break;
            case 8 :
                //condi��o para garantir uma subtra��o possivel de matrizes
                if(Ai==Bi && Aj==Bj)
                {
                    Ci = Ai;
                    Cj = Aj;
                    //subtrai matriz B de A
                    Sub( A, B, C, Ci, Cj);
                }
                else
                {
                    printf("\nAs matrizes possuem dimensoes diferentes, nao e possivel efetuar a operacao.\n");
                }
            break;
            case 9 :
                //Multiplica matriz A com B
                //condi��o para garantir uma multiplica��o possivel de matrizes
                if(Aj==Bi)
                {
                    Ci = Ai;
                    Cj = Bj;
                    //subtrai matriz B de A
                    Mult( A, B, C, Ci, Cj, Aj);
                }
                else
                {
                    printf("\nAs matrizes possuem dimensoes invalidas para essa operacao.\n");
                }
            break;
            case 10 :
                //imprime matriz A
                Printmatriz(A, Ai, Aj);
            break;
            case 11 :
                //imprime matriz B
                Printmatriz(B, Bi, Bj);
            break;
            case 12 :
                //imprime matriz C
                Printmatriz(C, Ci, Cj);
            break;
            case 13 :
                //L� arquivo da matriz A
                 Ler( A, aux);
                 //passando os vaores do vetor auxiliar para as variaveis
                 Ai = aux[0];
                 Aj = aux[1];
            break;
            case 14 :
                //L� arquivo da matriz B
                 Ler( B, aux);
                 //passando os vaores do vetor auxiliar para as variaveis
                 Bi = aux[0];
                 Bj = aux[1];
            break;
            case 15 :
                //Escrever arquivo da matriz C
                Escrever(C, Ci, Cj);
            break;
            case 16 :
                //encerra o loop
                n = 1;
                printf("\n-- Programa encerrado! --");
            break;
            //recurso para casos n�o existentes
            default:
                printf("\nOperacao invalida!");
        }
    }
}
