#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define SUCESSO 1
#define FALHA -1
#define MAX 20

typedef struct {
     double preco;
     char poltrona;
     //validade
     int dia, mes, ano;
     char tipo_ingresso;
     int promocao;

} Ingresso;

typedef struct {
     char cpf [MAX];
     char nome [MAX];
     Ingresso vetor [MAX];


} Cliente;

typedef struct {

     double totalDoDia;
     Cliente vetor [MAX];

     //implementar funcao do dinheiro
     
} Caixa;

/*
//tayna -> criar de forma dinâmica 
void criaIngresso();

void criaCliente();

void criaCaixa();
*/

/**
 * @brief Função que descobre a quantidade de ingressos com um cliente
 * @param C estrutura cliente criada
 * @return (int)quantidade de ingressos do Cliente
 */
int quantidadeIngressos(Cliente C){
     int quantidade = 0;

     for(int cont = 0; cont<MAX; cont++){
          if(C.vetor[cont].preco != 0) quantidade++;
     }
     return quantidade;
}

/**
 * @brief Função que calcula o valor total dos ingressos de um cliente
 * 
 * @param C estrutura cliente
 * @return double valor total dos ingressos de um cliente
 */
double clientePrecoTotal(Cliente C){
     double total = 0;
     int qtt = quantidadeIngressos(C);

     for(int cont = 0; cont<qtt; cont++){
          total += C.vetor[cont].preco;
     }
     return total;
}

/**
 * @brief Função que verifica se o ingresso está de promoção
 * 
 * @param I estrutura Ingresso
 * @return (int) 1 ou 0 (TRUE or FALSE) 
 */
int promocao(Ingresso I){
     if(I.promocao) return TRUE;
     else return FALSE;
}

/**
 * @brief Função que verifica se o ingresso é meia ou inteira
 * @param I estrutura Ingresso
 * @return (char) tipo de ingresso
 */
char tipoIngresso(Ingresso I){
     return I.tipo_ingresso;
}

/**
 * @brief Função que verifica se uma poltrona está ocupada ou não
 * @param I 
 * @param F 
 * @return TRUE or FALSE 
 */
int poltronaOcupada(Ingresso I, Ingresso F){
     if(I.poltrona == F.poltrona) return TRUE;
     else return FALSE;
}

//tayna
/**
 * @brief Função que verifica se o ingresso ainda está na data de validade
 * 
 * @param I 
 * @param dia 
 * @param mes 
 * @param ano 
 * @return int 
 */
int validaIngresso(Ingresso I, int dia, int mes, int ano){
     if(I.ano <= ano){
          if(I.mes <= mes){
               if(I.dia <= dia) return TRUE;
               else return FALSE;
          }else return FALSE;
     }else return FALSE;
}

//tayna
void escolhaPagamento(){
     printf("Formas de pagamento: \n");
     printf("1 - PIX\n");
     printf("2 - cartão\n");
     printf("3 - Dinheiro");
     printf("0 - cancelar compra\n");
     int num;
     scanf("%d", &num);
     switch (num){
          case 1:
               break;
          case 2:

               printf("Selecione o tipo de cartão: \n");
               printf("1 - Débito\n");
               printf("2 - Crédito\n");
               int j;
               scanf("%d", &j);
               switch (j){
                    case 1:
                         break;
                    case 2:
                    
                    default:
                         printf("Opção não disponível...\n");
                         printf("Digite novamente outro valor\n");
                                   
                         break;
               }


          case 3:
          default:
               break;
     }
}

//tayna
void clienteCompraIngresso(){

}

//tayna
void saldoTotalCaixa();

//tayna
void ingressosVendidosCaixa();

//tayna
void cadastraClienteCinema();

//tayna -> essa função depende das funções anteriores do cinema
void resumoCinema();

/**
 * @brief Função que mostra uma matriz com as poltronas, sendo essas ocupadas ou não
 * @param 
 * @return
 */
void esquemaPoltronas(){

}

/**
 * @brief Função que
 * 
 * 
 */
void apresentacao(){
     printf("#########################################\n");
     printf("           SEJA BEM-VINDO                 \n");
     printf("                CINE LUZ                  \n");
     printf("##########################################\n");
}

/**
 * @brief Função que implementa o menu de escolhas
 * 
 */
void MENU(){
     printf("Selecione alguma das opções abaixo: \n");
     printf("1 - ");
     printf("2 - ");
     printf("3 - ");
     printf("4 - ");
     printf("5 - ");
     printf("6 - ");
     printf("7 - ");
     int num;
     scanf("%d", &num);

     switch (num){
          case 1:
               break;
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
     
          default:
               break;
     }
}

/**
 * @brief Função para quebrar linha, pois não tenho o \ no teclado;
 */
void linhaVazia(){

     printf("\n");
}


int main(){

     //criando o ingresso
     Ingresso I;
     I.preco = 15;
     I.preco = 1;
     I.tipo_ingresso = 'I';
     I.dia = 15;
     I.mes = 11;
     I.ano = 2022;
     
     //criando o cliente
     Cliente C;
     int cont = 0;
     for(cont = 0; cont<MAX; cont++){
          scanf("%c", &C.nome[cont]);
     }
     C.nome[cont+1] = '\0';
     C.vetor[0] = I;

     printf("Quantidade de ingressos : %d \n", quantidadeIngressos(C));

     return 0;
}